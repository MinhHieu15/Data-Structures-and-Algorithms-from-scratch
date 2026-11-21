// 02 - Recursion: Tower of Hanoi
// Course: section 05, videos 031-032
//
// Move n disks from tower `from` to tower `to` using tower `via`.
// Record every move as a pair (source, destination) in `moves`.
// The test replays your moves and checks that no big disk lands on a smaller one.
#include <utility>
#include <vector>

#include "../../include/test.hpp"

using Moves = std::vector<std::pair<int, int>>;

void hanoi(int n, int from, int via, int to, Moves& moves) {
    // TODO: implement
}

// Replays the moves. Returns true when all n disks end on tower 3 legally.
bool valid_solution(int n, const Moves& moves) {
    std::vector<std::vector<int>> t(4);
    for (int d = n; d >= 1; d--) t[1].push_back(d);
    for (auto [a, b] : moves) {
        if (a < 1 || a > 3 || b < 1 || b > 3 || t[a].empty()) return false;
        if (!t[b].empty() && t[b].back() < t[a].back()) return false;
        t[b].push_back(t[a].back());
        t[a].pop_back();
    }
    return (int)t[3].size() == n;
}

int main() {
    for (int n = 1; n <= 10; n++) {
        Moves m;
        hanoi(n, 1, 2, 3, m);
        CHECK_EQ((int)m.size(), (1 << n) - 1);
        CHECK(valid_solution(n, m));
    }
    Moves m3;
    hanoi(2, 1, 2, 3, m3);
    CHECK_EQ(m3, Moves{{1, 2}, {1, 3}, {2, 3}});
    return TEST_SUMMARY();
}
