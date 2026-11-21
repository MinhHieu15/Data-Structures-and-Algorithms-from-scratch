// 18 - Backtracking: rat in a maze
// Course: section 28, video 008
//
// maze[r][c] == 1 is open, 0 is a wall. Start at (0, 0), goal at (n-1, m-1).
// count_paths: the rat may move only Down or Right. Count all paths.
// find_path:   the rat may move in 4 directions, never visiting a cell twice.
//              Try moves in the order D, L, R, U and return the first path found as a
//              string like "DDRR", or "" if there is none (also "" if start is a wall).
#include <string>
#include <vector>

#include "../../include/test.hpp"

using std::string;
using std::vector;
using Maze = vector<vector<int>>;


long long count_paths(const Maze& maze) {
    // TODO: implement
    return 0;
}

string find_path(const Maze& maze) {
    // TODO: implement
    return "";
}

int main() {
    Maze open3(3, vector<int>(3, 1));
    CHECK_EQ(count_paths(open3), 6LL);  // C(4, 2)

    Maze m{{1, 0, 0, 0},
           {1, 1, 0, 1},
           {0, 1, 0, 0},
           {1, 1, 1, 1}};
    CHECK_EQ(count_paths(m), 1LL);
    CHECK_EQ(find_path(m), "DRDDRR");

    Maze needs_left{{1, 1, 1},
                  {0, 0, 1},
                  {1, 1, 1},
                  {1, 0, 0},
                  {1, 1, 1}};
    CHECK_EQ(count_paths(needs_left), 0LL);
    CHECK_EQ(find_path(needs_left), "RRDDLLDDRR");

    Maze blocked{{1, 0}, {0, 1}};
    CHECK_EQ(find_path(blocked), "");
    CHECK_EQ(count_paths(blocked), 0LL);
    return TEST_SUMMARY();
}
