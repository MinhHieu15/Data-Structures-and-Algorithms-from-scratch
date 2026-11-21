// 18 - Backtracking: subset sum with a bounding function
// Course: section 28, videos 006-007 (bounding functions)
//
// Values are positive and sorted ascending. Return every subset whose sum is exactly k,
// each subset ascending, subsets in the order you find them when you decide
// "take item i" before "skip item i" for i = 0, 1, 2, ...
// Prune (bounding function): stop a branch when the sum already passes k, or when
// even taking every remaining item cannot reach k.
// calls is incremented on every recursive call, so the test can see your pruning work.
#include <vector>

#include "../../include/test.hpp"

using std::vector;


vector<vector<int>> subset_sum(const vector<int>& a, int k, long long& calls) {
    // TODO: implement
    return {};
}

int main() {
    long long calls = 0;
    CHECK_EQ(subset_sum({5, 10, 12, 13, 15, 18}, 30, calls),
             vector<vector<int>>{{5, 10, 15}, {5, 12, 13}, {12, 18}});
    calls = 0;
    CHECK_EQ(subset_sum({1, 2, 3}, 7, calls), vector<vector<int>>{});
    CHECK(calls <= 1);  // 1+2+3 < 7: the bound should stop immediately

    vector<int> big;
    for (int i = 1; i <= 25; i++) big.push_back(i * 4);
    calls = 0;
    auto r = subset_sum(big, 12, calls);
    CHECK_EQ(r, vector<vector<int>>{{4, 8}, {12}});
    CHECK(calls > 0 && calls < 200);  // without pruning this would be millions of calls
    return TEST_SUMMARY();
}
