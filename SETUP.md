# Setup on Windows (VS Code + g++)

You need three things: a C++ compiler (`g++`), a debugger (`gdb`) and VS Code with the
C/C++ extension.

## 1. Compiler and debugger

Check what you already have. Open a new terminal and run:

```bash
g++ --version
gdb --version
```

If both print a version (g++ 9 or newer), skip to step 2.

Otherwise install MSYS2, which gives an up-to-date g++ and gdb:

1. Install MSYS2: `winget install MSYS2.MSYS2` (or the installer from https://www.msys2.org).
2. Open **MSYS2 UCRT64** from the Start menu and run:
   ```bash
   pacman -S --needed mingw-w64-ucrt-x86_64-gcc mingw-w64-ucrt-x86_64-gdb
   ```
3. Add `C:\msys64\ucrt64\bin` to your user `Path` (Start → "Edit environment variables for your
   account" → Path → New). Move it **above** any older MinGW folder so the new g++ is found first.
4. Close every terminal and VS Code, open a new terminal, and check `g++ --version` and
   `gdb --version` again.

You can work without gdb: compiling and running tests only needs g++. gdb is only for `F5` debugging.

## 2. VS Code

1. Open the folder `dsa-practice` in VS Code (File → Open Folder).
2. Accept the prompt to install the recommended extension **C/C++** (`ms-vscode.cpptools`).
3. If PowerShell refuses to run scripts, nothing to do: the tasks already pass
   `-ExecutionPolicy Bypass` for these two scripts only.

## 3. Check that everything works

1. Open `exercises/01-cpp-basics/01_swap.cpp`.
2. Press `Ctrl+Shift+B`. You should see `[FAIL]` lines and `FAILED 01_swap.cpp: 3/6 checks passed`.
   That is correct: the functions are still empty.
3. Fill in `swap_by_address`, press `Ctrl+Shift+B` again and watch the number go up.
4. Set a breakpoint (click left of a line number) and press `F5` to debug (needs gdb).

## Keyboard shortcuts

| Action | Shortcut / command |
| --- | --- |
| Compile + run the open exercise | `Ctrl+Shift+B` |
| Run all tests in the open file's topic | `Ctrl+Shift+P` → *Tasks: Run Task* → **Test current topic** |
| Run every exercise, show progress | `Ctrl+Shift+P` → *Tasks: Run Test Task* |
| Debug the open file | `F5` |

From a terminal in the repo folder:

```bash
powershell -ExecutionPolicy Bypass -File scripts/test.ps1
```
