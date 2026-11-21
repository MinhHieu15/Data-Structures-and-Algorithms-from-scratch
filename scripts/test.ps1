# Build and run every exercise (or only those under -Path) and print a summary.
#   powershell -ExecutionPolicy Bypass -File scripts\test.ps1
#   powershell -ExecutionPolicy Bypass -File scripts\test.ps1 -Path exercises\06-linked-list
# A program that runs longer than -TimeoutSec seconds is stopped (usually an infinite loop).
param(
    [string]$Path = 'exercises',
    [int]$TimeoutSec = 10
)

$root = Split-Path -Parent $PSScriptRoot
$build = Join-Path $root 'build\test'
New-Item -ItemType Directory -Force $build | Out-Null

$target = if ([IO.Path]::IsPathRooted($Path)) { $Path } else { Join-Path $root $Path }
$files = Get-ChildItem -Path $target -Recurse -Filter *.cpp | Sort-Object FullName
$pass = 0; $fail = 0; $broken = 0

foreach ($f in $files) {
    $label = $f.Directory.Name + '/' + $f.Name
    $exe = Join-Path $build ($f.Directory.Name + '_' + $f.BaseName + '.exe')
    $log = Join-Path $build ($f.Directory.Name + '_' + $f.BaseName + '.txt')

    $compileOutput = & g++ -std=c++17 -Wall -O1 $f.FullName -o $exe 2>&1
    if ($LASTEXITCODE -ne 0) {
        Write-Host ('  COMPILE ERROR  ' + $label) -ForegroundColor Yellow
        $broken++
        continue
    }

    $p = Start-Process -FilePath $exe -NoNewWindow -PassThru -RedirectStandardOutput $log
    $null = $p.Handle  # needed so ExitCode is available later
    if (-not $p.WaitForExit($TimeoutSec * 1000)) {
        $p.Kill()
        Write-Host ('  TIMEOUT        ' + $label + '  (infinite loop?)') -ForegroundColor Red
        $fail++
        continue
    }
    $p.WaitForExit()
    $summary = Get-Content $log -Tail 1
    if ($p.ExitCode -eq 0) {
        Write-Host ('  PASS           ' + $label) -ForegroundColor Green
        $pass++
    } else {
        Write-Host ('  FAIL           ' + $label + '  ' + $summary) -ForegroundColor Red
        $fail++
    }
}

$total = $pass + $fail + $broken
Write-Host ''
Write-Host ("Progress: {0}/{1} exercises passing  ({2} failing, {3} not compiling)" -f $pass, $total, $fail, $broken)
if ($pass -eq $total) { exit 0 } else { exit 1 }
