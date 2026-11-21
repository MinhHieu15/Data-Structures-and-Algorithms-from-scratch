// 18 - Backtracking: Sudoku solver
// Course: section 28, video 009
//
// board is 9x9, 0 = empty cell. Fill it in place and return true,
// or return false (board unchanged) if there is no solution.
// Classic backtracking: find an empty cell, try digits 1..9 that are safe, recurse,
// undo on failure.
#include <vector>

#include "../../include/test.hpp"

using Board = std::vector<std::vector<int>>;


bool solve_sudoku(Board& b) {
    // TODO: implement
    return false;
}

// ---- test helpers ----
bool is_complete_and_valid(const Board& b) {
    for (int i = 0; i < 9; i++) {
        int row = 0, col = 0, box = 0;
        for (int j = 0; j < 9; j++) {
            int x = b[i][j], y = b[j][i], z = b[i / 3 * 3 + j / 3][i % 3 * 3 + j % 3];
            if (x < 1 || x > 9 || y < 1 || y > 9 || z < 1 || z > 9) return false;
            row |= 1 << x;
            col |= 1 << y;
            box |= 1 << z;
        }
        if (row != 0x3FE || col != 0x3FE || box != 0x3FE) return false;
    }
    return true;
}
bool keeps_givens(const Board& puzzle, const Board& solved) {
    for (int r = 0; r < 9; r++)
        for (int c = 0; c < 9; c++)
            if (puzzle[r][c] && puzzle[r][c] != solved[r][c]) return false;
    return true;
}

int main() {
    Board puzzle{{5, 3, 0, 0, 7, 0, 0, 0, 0}, {6, 0, 0, 1, 9, 5, 0, 0, 0},
                 {0, 9, 8, 0, 0, 0, 0, 6, 0}, {8, 0, 0, 0, 6, 0, 0, 0, 3},
                 {4, 0, 0, 8, 0, 3, 0, 0, 1}, {7, 0, 0, 0, 2, 0, 0, 0, 6},
                 {0, 6, 0, 0, 0, 0, 2, 8, 0}, {0, 0, 0, 4, 1, 9, 0, 0, 5},
                 {0, 0, 0, 0, 8, 0, 0, 7, 9}};
    Board b = puzzle;
    CHECK(solve_sudoku(b));
    CHECK(is_complete_and_valid(b));
    CHECK(keeps_givens(puzzle, b));
    CHECK_EQ(b[0], {5, 3, 4, 6, 7, 8, 9, 1, 2});

    Board bad = puzzle;
    bad[0][3] = 1;  // now cell (0,2) has no legal digit: no solution
    bad[0][5] = 2;
    bad[0][6] = 4;
    Board copy = bad;
    CHECK(!solve_sudoku(bad));
    CHECK(bad == copy);
    return TEST_SUMMARY();
}
