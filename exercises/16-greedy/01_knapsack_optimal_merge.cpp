// 16 - Greedy: fractional knapsack and optimal merge pattern
// Course: section 26, videos 001-004 and 012
//
// fractional_knapsack: you may take a fraction of an item. Return the maximum profit.
//                      Greedy rule: take items by highest profit/weight first.
// optimal_merge_cost:  merging two sorted lists of sizes a and b costs a + b.
//                      Return the minimum total cost to merge all lists into one.
//                      Greedy rule: always merge the two smallest (use a min-heap).
#include <queue>
#include <vector>

#include "../../include/test.hpp"

using std::vector;

double fractional_knapsack(const vector<int>& profit, const vector<int>& weight, int capacity) {
    // TODO: implement
    return 0;
}

long long optimal_merge_cost(const vector<int>& sizes) {
    // TODO: implement
    return 0;
}

int main() {
    // course example: 7 items, capacity 15
    vector<int> p{10, 5, 15, 7, 6, 18, 3}, w{2, 3, 5, 7, 1, 4, 1};
    CHECK_NEAR(fractional_knapsack(p, w, 15), 55.333333, 1e-4);
    CHECK_NEAR(fractional_knapsack(p, w, 100), 64.0, 1e-9);
    CHECK_NEAR(fractional_knapsack({60, 100, 120}, {10, 20, 30}, 50), 240.0, 1e-9);

    CHECK_EQ(optimal_merge_cost({20, 30, 10, 5, 30}), 205LL);
    CHECK_EQ(optimal_merge_cost({2, 3, 5, 7, 9, 13}), 93LL);
    CHECK_EQ(optimal_merge_cost({42}), 0LL);
    return TEST_SUMMARY();
}
