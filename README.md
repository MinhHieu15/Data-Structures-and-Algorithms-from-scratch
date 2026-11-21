# Data Structures & Algorithms in C/C++

My 70-day practice repo for learning data structures and algorithms in C and C++.
It follows the course *Mastering Data Structures & Algorithms using C and C++* section by
section, with one or more self-checking exercises per topic.

- **[ROADMAP.md](ROADMAP.md)** — what to watch and solve each day, plus LeetCode practice
- **[SETUP.md](SETUP.md)** — install g++/gdb and set up VS Code on Windows

## How it works

Every file in `exercises/` contains:

1. a short problem description and the course videos it matches,
2. functions marked `// TODO: implement` that I fill in,
3. a `main()` full of tests.

Open a file and press `Ctrl+Shift+B`. It compiles with `g++ -std=c++17` and runs the tests:

```
[FAIL] exercises/02-recursion/04_ncr.cpp:16  ncr(5, 2)
       expected 10, got 0
FAILED 04_ncr.cpp: 3/6 checks passed
```

When everything passes: `PASSED 04_ncr.cpp: 6/6 checks passed`.

Run all exercises and see overall progress:

```bash
powershell -ExecutionPolicy Bypass -File scripts/test.ps1
```

## Progress

| # | Topic | Exercises | Course sections | Done |
| --- | --- | :---: | --- | :---: |
| 01 | C/C++ basics | 3 | 02 | ⬜ |
| 02 | Recursion | 5 | 04–05 | ⬜ |
| 03 | Arrays | 4 | 06–07 | ⬜ |
| 04 | Strings | 4 | 08 | ⬜ |
| 05 | Matrices, sparse matrix, polynomial | 2 | 09–10 | ⬜ |
| 06 | Linked list | 5 | 11–12 | ⬜ |
| 07 | Stack | 3 | 13 | ⬜ |
| 08 | Queue | 2 | 14 | ⬜ |
| 09 | Trees | 3 | 15 | ⬜ |
| 10 | BST & AVL | 2 | 16–18 | ⬜ |
| 11 | Heap | 1 | 19 | ⬜ |
| 12 | Sorting | 3 | 20 | ⬜ |
| 13 | Hashing | 2 | 21 | ⬜ |
| 14 | Graphs | 2 | 22–24 | ⬜ |
| 15 | Divide & conquer | 1 | 25 | ⬜ |
| 16 | Greedy | 3 | 26 | ⬜ |
| 17 | Dynamic programming | 4 | 27 | ⬜ |
| 18 | Backtracking | 4 | 28 | ⬜ |
| | **Total** | **53** | | |

Change ⬜ to ✅ when every exercise of a topic passes.

## Layout

```
exercises/      one folder per topic, the graded exercises
include/        test.hpp: the tiny test helper (CHECK, CHECK_EQ, CHECK_NEAR)
playground/     free space to type along with the "Let's Code" videos
notes/          daily notes (copy TEMPLATE.md)
scripts/        run.ps1 (one file), test.ps1 (all files + progress)
.vscode/        build task (Ctrl+Shift+B), test tasks, gdb debugging (F5)
```

## Rules I follow

- Write the solution myself before watching the "Let's Code" video for it.
- Never change the tests to make them pass.
- Commit every study day.

Course videos are not part of this repo.
