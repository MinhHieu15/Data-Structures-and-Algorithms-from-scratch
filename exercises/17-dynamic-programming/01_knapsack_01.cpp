// 17 - Dynamic programming: 0/1 knapsack
// Course: section 27, videos 001-007
//
// Each item is taken whole or not at all. Return the maximum profit.
// knapsack_memo: recursion + memo table (top-down)
// knapsack_tab:  tabulation table V[i][w] (bottom-up)
// chosen_items:  from the tabulation table, return which items (0-based, ascending) were
//                taken in an optimal answer. Trace back from V[n][W] like the course.
#include <vector>

#include "../../include/test.hpp"

using std::vector;


int knapsack_memo(const vector<int>& profit, const vector<int>& weight, int W) {
    // TODO: implement
    return 0;
}

int knapsack_tab(const vector<int>& profit, const vector<int>& weight, int W) {
    // TODO: implement
    return 0;
}

vector<int> chosen_items(const vector<int>& profit, const vector<int>& weight, int W) {
    // TODO: implement
    return {};
}

int main() {
    // course example: m = 8
    vector<int> p{1, 2, 5, 6}, w{2, 3, 4, 5};
    CHECK_EQ(knapsack_memo(p, w, 8), 8);
    CHECK_EQ(knapsack_tab(p, w, 8), 8);
    CHECK_EQ(chosen_items(p, w, 8), {1, 3});

    vector<int> p2{60, 100, 120}, w2{10, 20, 30};
    CHECK_EQ(knapsack_memo(p2, w2, 50), 220);
    CHECK_EQ(knapsack_tab(p2, w2, 50), 220);
    CHECK_EQ(chosen_items(p2, w2, 50), {1, 2});
    CHECK_EQ(knapsack_tab(p2, w2, 5), 0);
    return TEST_SUMMARY();
}
