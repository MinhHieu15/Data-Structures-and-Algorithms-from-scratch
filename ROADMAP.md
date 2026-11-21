# 70-Day DSA Roadmap (C/C++)

10 weeks, 6 study days + 1 review day per week, about **1.5–2.5 hours a day**.
The order follows the course folders (`01 - Before we Start` … `28 - Backtracking`), so
"`S05` 016–023" means *section 05 – Recursion, videos 016 to 023*.

Tick a box (`[ ]` → `[x]`) when you finish the day, then commit. Your GitHub history
becomes your progress log.

## Daily routine

1. **Watch** the videos for the day (1.25x speed is fine). Pause and predict the next step.
2. **Type along** every "Let's Code" video in `playground/` (not copy-paste).
3. **Solve** the exercise for the day in `exercises/` without looking at the video code.
   Press `Ctrl+Shift+B` to compile and run its tests.
4. **Write 3–5 lines** in `notes/` – what you learned, what confused you, the time/space complexity.
5. **Commit and push**.

On review days: re-solve the week's exercises from a blank function (delete your code, keep
the tests), then do the LeetCode list. Stuck for more than 30 minutes → rewatch the video,
then move on and come back on the next review day.

If you fall behind, do not skip ahead – use the review day to catch up. Finishing in 12 weeks
is much better than giving up in week 4.

---

## Week 1 — C/C++ essentials & recursion basics

- [ ] **Day 1** — Read [SETUP.md](SETUP.md) and set up VS Code · `S01` 001–002 · `S02` 001–010 (arrays, structures, pointers, references)
  → `01-cpp-basics/01_swap.cpp` (both swaps)
- [ ] **Day 2** — `S02` 011–020 (functions, parameter passing, arrays/structs as parameters)
  → `01_swap.cpp` (`array_sum`), `01-cpp-basics/02_rectangle.cpp`
- [ ] **Day 3** — `S02` 021–028 (C program → C++ class, constructors, templates)
  → `01-cpp-basics/03_template_class.cpp`
- [ ] **Day 4** — `S04` 001–007 (stack vs heap memory, ADT, time & space complexity)
  → notes: write the Big-O of 5 loops of your own
- [ ] **Day 5** — `S05` 001–008 (tracing recursion, recursion and the stack, tail recursion)
  → notes: trace `fun(3)` on paper, draw the call stack
- [ ] **Day 6** — `S05` 009–015 (head, tree, indirect, nested recursion)
  → type along in `playground/`
- [ ] **Day 7 · Review** — redo week 1 exercises ·
  LeetCode: [509 Fibonacci Number](https://leetcode.com/problems/fibonacci-number/),
  [344 Reverse String](https://leetcode.com/problems/reverse-string/) (solve it recursively)

## Week 2 — Recursion problems & arrays

- [ ] **Day 8** — `S05` 016–023 (sum, factorial, power, Taylor series)
  → `02-recursion/01_sum_factorial_power.cpp`, `02_taylor_series.cpp` (`taylor_recursive`)
- [ ] **Day 9** — `S05` 024–033 (Horner's rule, Fibonacci + memoization, nCr, Tower of Hanoi)
  → `02_taylor_series.cpp` (`taylor_horner`), `03_fibonacci.cpp`, `04_ncr.cpp`, `05_tower_of_hanoi.cpp`
- [ ] **Day 10** — `S06` 001–008 (array declaration, static vs dynamic, growing an array, 2D arrays)
  → type along in `playground/`
- [ ] **Day 11** — `S06` 009–015 (row-major / column-major formulas, nD arrays)
  → notes: derive the address formula for `A[i][j]` both ways
- [ ] **Day 12** — `S07` 001–009 (Array ADT, insert, delete, linear search)
  → `03-arrays/01_array_adt.cpp` (`append`, `insert`, `remove`, `linear_search`)
- [ ] **Day 13** — `S07` 010–020 (binary search + analysis, get/set/max, reverse, is sorted)
  → `01_array_adt.cpp` (everything else)
- [ ] **Day 14 · Review** — LeetCode:
  [704 Binary Search](https://leetcode.com/problems/binary-search/),
  [70 Climbing Stairs](https://leetcode.com/problems/climbing-stairs/),
  [50 Pow(x, n)](https://leetcode.com/problems/powx-n/),
  [26 Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)

## Week 3 — Array challenges, strings, matrices

- [ ] **Day 15** — `S07` 021–027 (merging, union / intersection / difference, menu program)
  → `03-arrays/02_merge_and_sets.cpp`
- [ ] **Day 16** — `S07` 028–037 (student challenges: missing elements, duplicates, pair with sum K, min/max)
  → `03_missing_elements.cpp`, `04_duplicates_pairs.cpp`
- [ ] **Day 17** — `S08` 001–006 (length, case, words & vowels, validation, reverse)
  → `04-strings/01_string_basics.cpp`, `02_reverse_palindrome.cpp` (`reverse_in_place`)
- [ ] **Day 18** — `S08` 007–011 (compare, palindrome, duplicates with bits, anagram, permutations)
  → `02_reverse_palindrome.cpp`, `03_duplicates_anagram.cpp`, `04_permutations.cpp`
- [ ] **Day 19** — `S09` 001–009 (diagonal, lower triangular matrices)
  → `05-matrices/01_special_matrices.cpp` (`Diagonal`, `LowerTriangular`)
- [ ] **Day 20** — `S09` 010–017 (upper triangular, symmetric, tri-diagonal, Toeplitz)
  → `01_special_matrices.cpp` (`Toeplitz`)
- [ ] **Day 21 · Review** — LeetCode:
  [1 Two Sum](https://leetcode.com/problems/two-sum/),
  [268 Missing Number](https://leetcode.com/problems/missing-number/),
  [88 Merge Sorted Array](https://leetcode.com/problems/merge-sorted-array/),
  [242 Valid Anagram](https://leetcode.com/problems/valid-anagram/),
  [125 Valid Palindrome](https://leetcode.com/problems/valid-palindrome/),
  [217 Contains Duplicate](https://leetcode.com/problems/contains-duplicate/)

## Week 4 — Sparse matrices & linked lists

- [ ] **Day 22** — `S10` 001–012 (sparse matrix, polynomial representation)
  → `05-matrices/02_sparse_polynomial.cpp`
- [ ] **Day 23** — `S11` 001–015 (display, count, sum, max, search)
  → `06-linked-list/01_basics.cpp`
- [ ] **Day 24** — `S11` 016–023 (insert, create, insert sorted, delete)
  → `06-linked-list/02_insert_delete.cpp`
- [ ] **Day 25** — `S11` 024–031 (is sorted, remove duplicates, reverse 3 ways)
  → `03_reverse_merge.cpp` (`is_sorted`, `remove_duplicates_sorted`, `reverse`, `reverse_recursive`)
- [ ] **Day 26** — `S11` 032–037 (concatenate, merge, loop detection, C++ class)
  → `03_reverse_merge.cpp` (`concatenate`, `merge`), `04_loop_middle_intersection.cpp` (`has_loop`)
- [ ] **Day 27** — `S11` 038–046 (circular linked list, doubly linked list intro)
  → `05_doubly_circular.cpp` (`cl_insert`)
- [ ] **Day 28 · Review** — LeetCode:
  [206 Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/),
  [21 Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/),
  [83 Remove Duplicates from Sorted List](https://leetcode.com/problems/remove-duplicates-from-sorted-list/),
  [141 Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/),
  [203 Remove Linked List Elements](https://leetcode.com/problems/remove-linked-list-elements/)

## Week 5 — Linked lists (end), stacks, queues

- [ ] **Day 29** — `S11` 047–057 (doubly insert/delete/reverse, comparisons, middle, intersection)
  → `05_doubly_circular.cpp` (doubly part), `04_loop_middle_intersection.cpp` (rest)
- [ ] **Day 30** — `S12` 001–003 · `S13` 001–008 (stack with array and with linked list)
  → `07-stack/01_stack.cpp`
- [ ] **Day 31** — `S13` 009–016 (parenthesis matching, infix → postfix theory)
  → `07-stack/02_parenthesis.cpp`
- [ ] **Day 32** — `S13` 017–022 (infix → postfix program, postfix evaluation)
  → `07-stack/03_infix_postfix.cpp`
- [ ] **Day 33** — `S14` 001–009 (queue ADT, array queue, circular queue)
  → `08-queue/01_circular_queue.cpp`
- [ ] **Day 34** — `S14` 010–014 (linked queue, deque, priority queue, queue with 2 stacks)
  → `08-queue/02_linked_queue_two_stacks.cpp`
- [ ] **Day 35 · Review** — LeetCode:
  [876 Middle of the Linked List](https://leetcode.com/problems/middle-of-the-linked-list/),
  [160 Intersection of Two Linked Lists](https://leetcode.com/problems/intersection-of-two-linked-lists/),
  [20 Valid Parentheses](https://leetcode.com/problems/valid-parentheses/),
  [150 Evaluate Reverse Polish Notation](https://leetcode.com/problems/evaluate-reverse-polish-notation/),
  [155 Min Stack](https://leetcode.com/problems/min-stack/),
  [232 Implement Queue using Stacks](https://leetcode.com/problems/implement-queue-using-stacks/),
  [622 Design Circular Queue](https://leetcode.com/problems/design-circular-queue/)

## Week 6 — Trees & binary search trees

- [ ] **Day 36** — `S15` 001–009 (terminology, counting trees, height vs nodes, n-ary trees)
  → notes: the formulas, with one example each
- [ ] **Day 37** — `S15` 010–017 (representation, full vs complete, traversals by hand)
  → notes: write pre/in/post order of 3 trees you draw
- [ ] **Day 38** — `S15` 018–026 (creating a tree, recursive and iterative traversals)
  → `09-trees/01_traversals.cpp`
- [ ] **Day 39** — `S15` 027–033 (level order, tree from traversals, height and count)
  → `09-trees/02_height_count.cpp`, `03_build_from_traversals.cpp`
- [ ] **Day 40** — `S16` 001–006 (BST search, insert, create)
  → `10-bst-avl/01_bst.cpp` (`insert`, `search`)
- [ ] **Day 41** — `S16` 007–011 (BST delete, BST from preorder, drawbacks)
  → `01_bst.cpp` (`remove`, `from_preorder`)
- [ ] **Day 42 · Review** — LeetCode:
  [94 Binary Tree Inorder Traversal](https://leetcode.com/problems/binary-tree-inorder-traversal/),
  [102 Binary Tree Level Order Traversal](https://leetcode.com/problems/binary-tree-level-order-traversal/),
  [104 Maximum Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/),
  [105 Construct Binary Tree from Preorder and Inorder](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/),
  [701 Insert into a BST](https://leetcode.com/problems/insert-into-a-binary-search-tree/),
  [450 Delete Node in a BST](https://leetcode.com/problems/delete-node-in-a-bst/)

## Week 7 — AVL, search trees, heap, sorting I

- [ ] **Day 43** — `S17` 001–008 (AVL rotations, insert, delete, height analysis)
  → `10-bst-avl/02_avl.cpp`
- [ ] **Day 44** — `S18` 001–009 (2-3, 2-3-4, red-black trees – theory only)
  → notes: insert 10, 20, … 100 into a 2-3 tree and a red-black tree on paper
- [ ] **Day 45** — `S19` 001–008 (heap insert, delete, heap sort, heapify, priority queue)
  → `11-heap/01_heap.cpp`
- [ ] **Day 46** — `S20` 001–009 (criteria for sorts, bubble, insertion)
  → `12-sorting/01_simple_sorts.cpp` (`bubble_sort`, `insertion_sort`)
- [ ] **Day 47** — `S20` 010–018 (selection sort, quick sort + analysis)
  → `01_simple_sorts.cpp` (`selection_sort`), `02_quick_merge.cpp` (`partition`, `quick_sort`)
- [ ] **Day 48** — `S20` 019–023 (merging, iterative and recursive merge sort)
  → `02_quick_merge.cpp` (merge functions)
- [ ] **Day 49 · Review** — LeetCode:
  [110 Balanced Binary Tree](https://leetcode.com/problems/balanced-binary-tree/),
  [215 Kth Largest Element in an Array](https://leetcode.com/problems/kth-largest-element-in-an-array/),
  [1046 Last Stone Weight](https://leetcode.com/problems/last-stone-weight/),
  [912 Sort an Array](https://leetcode.com/problems/sort-an-array/),
  [75 Sort Colors](https://leetcode.com/problems/sort-colors/)

## Week 8 — Sorting II, hashing, graphs, complexity theory

- [ ] **Day 50** — `S20` 024–029 (count, bucket, radix, shell sort)
  → `12-sorting/03_count_radix_shell.cpp`
- [ ] **Day 51** — `S21` 001–008 (chaining, linear/quadratic probing, double hashing)
  → `13-hashing/01_chaining.cpp`, `02_open_addressing.cpp`
- [ ] **Day 52** — `S22` 001–008 (graph representation, BFS, DFS)
  → `14-graphs/01_bfs_dfs.cpp`
- [ ] **Day 53** — `S22` 009 · `S24` 001–005 (disjoint sets, asymptotic notations)
  → `14-graphs/02_disjoint_set.cpp`
- [ ] **Day 54** — `S23` 001–007 (recurrence relations for decreasing/dividing functions)
  → notes: solve each recurrence from the videos yourself before watching the answer
- [ ] **Day 55** — `S23` 008–013 (master theorem)
  → notes: a one-page cheat sheet of the master theorem cases
- [ ] **Day 56 · Review** — LeetCode:
  [706 Design HashMap](https://leetcode.com/problems/design-hashmap/),
  [733 Flood Fill](https://leetcode.com/problems/flood-fill/),
  [200 Number of Islands](https://leetcode.com/problems/number-of-islands/),
  [547 Number of Provinces](https://leetcode.com/problems/number-of-provinces/),
  [684 Redundant Connection](https://leetcode.com/problems/redundant-connection/)

## Week 9 — Divide & conquer, greedy, dynamic programming I

- [ ] **Day 57** — `S25` 001–008 (D&C, binary search, merge sort, k-way merging, Strassen)
  → `15-divide-conquer/01_divide_conquer.cpp`
- [ ] **Day 58** — `S26` 001–004 and 012 (greedy method, fractional knapsack, optimal merge pattern)
  → `16-greedy/01_knapsack_optimal_merge.cpp`
- [ ] **Day 59** — `S26` 005–009 (minimum spanning tree: Kruskal, Prim)
  → `16-greedy/02_mst.cpp`
- [ ] **Day 60** — `S26` 010–011 (Dijkstra)
  → `16-greedy/03_dijkstra.cpp`
- [ ] **Day 61** — `S27` 001–007 (DP intro, 0/1 knapsack: recursion → memoization → tabulation)
  → `17-dynamic-programming/01_knapsack_01.cpp`
- [ ] **Day 62** — `S27` 008–011 (matrix chain multiplication)
  → `17-dynamic-programming/02_matrix_chain.cpp`
- [ ] **Day 63 · Review** — LeetCode:
  [23 Merge k Sorted Lists](https://leetcode.com/problems/merge-k-sorted-lists/),
  [455 Assign Cookies](https://leetcode.com/problems/assign-cookies/),
  [1584 Min Cost to Connect All Points](https://leetcode.com/problems/min-cost-to-connect-all-points/),
  [743 Network Delay Time](https://leetcode.com/problems/network-delay-time/),
  [416 Partition Equal Subset Sum](https://leetcode.com/problems/partition-equal-subset-sum/)

## Week 10 — Dynamic programming II, backtracking, wrap-up

- [ ] **Day 64** — `S27` 012–015 (longest common subsequence)
  → `17-dynamic-programming/03_lcs.cpp`
- [ ] **Day 65** — `S27` 016–020 (max subarray sum, Kadane, D&C version)
  → `17-dynamic-programming/04_max_subarray.cpp`
- [ ] **Day 66** — `S28` 001–005 (brute force vs backtracking, N-Queens)
  → `18-backtracking/01_n_queens.cpp`
- [ ] **Day 67** — `S28` 006–007 (permutations, bounding functions)
  → `18-backtracking/02_subset_sum.cpp`
- [ ] **Day 68** — `S28` 008–009 (rat in a maze, Sudoku)
  → `18-backtracking/03_rat_in_maze.cpp`, `04_sudoku.cpp`
- [ ] **Day 69** — Run **Test all exercises** until it shows `53/53`. Update the progress table in
  [README.md](README.md). Write `notes/retrospective.md`: hardest topic, what to review.
- [ ] **Day 70 · Final review** — LeetCode:
  [1143 Longest Common Subsequence](https://leetcode.com/problems/longest-common-subsequence/),
  [53 Maximum Subarray](https://leetcode.com/problems/maximum-subarray/),
  [322 Coin Change](https://leetcode.com/problems/coin-change/),
  [46 Permutations](https://leetcode.com/problems/permutations/),
  [78 Subsets](https://leetcode.com/problems/subsets/),
  [51 N-Queens](https://leetcode.com/problems/n-queens/),
  [79 Word Search](https://leetcode.com/problems/word-search/)

---

## After day 70

- Do 2–3 LeetCode problems a day by topic (NeetCode 150 or Blind 75 lists are good orders).
- Re-implement the harder structures (AVL delete, red-black insert, graph algorithms on
  adjacency lists) without the course.
- Time yourself: an easy problem in 15 minutes, a medium in 30–40 minutes.
