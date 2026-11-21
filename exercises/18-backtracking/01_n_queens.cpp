// 18 - Backtracking: N-Queens
// Course: section 28, videos 001-005
//
// Place n queens on an n x n board so that no two attack each other.
// Put one queen per row; place[r] = column of the queen in row r.
// count_solutions: number of solutions.
// first_solution:  the first solution found when trying columns 0, 1, 2, ... in each row
//                  (empty vector if there is none).
#include <vector>

#include "../../include/test.hpp"

using std::vector;


int count_solutions(int n) {
    // TODO: implement
    return 0;
}

vector<int> first_solution(int n) {
    // TODO: implement
    return {};
}

int main() {
    int expected[] = {0, 1, 0, 0, 2, 10, 4, 40, 92};
    for (int n = 1; n <= 8; n++) CHECK_EQ(count_solutions(n), expected[n]);
    CHECK_EQ(first_solution(4), {1, 3, 0, 2});
    CHECK_EQ(first_solution(8), {0, 4, 7, 5, 2, 6, 1, 3});
    CHECK_EQ(first_solution(3), {});
    return TEST_SUMMARY();
}
