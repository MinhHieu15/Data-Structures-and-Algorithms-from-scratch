# Compile one C++ file with g++ and run it.
#   powershell -ExecutionPolicy Bypass -File scripts\run.ps1 exercises\02-recursion\04_ncr.cpp
# -BuildOnly compiles to build\debug.exe without running (used by the debugger).
param(
    [Parameter(Mandatory = $true)][string]$File,
    [switch]$BuildOnly
)

$root = Split-Path -Parent $PSScriptRoot
$build = Join-Path $root 'build'
New-Item -ItemType Directory -Force $build | Out-Null

$full = (Resolve-Path $File).Path
if ($BuildOnly) {
    $exe = Join-Path $build 'debug.exe'
} else {
    $folder = Split-Path -Leaf (Split-Path -Parent $full)
    $exe = Join-Path $build ($folder + '_' + [IO.Path]::GetFileNameWithoutExtension($full) + '.exe')
}

& g++ -std=c++17 -Wall -g -O0 $full -o $exe
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }
if ($BuildOnly) { exit 0 }

& $exe
exit $LASTEXITCODE
