// 03 - Arrays: student challenges, duplicates and pairs
// Course: section 07, videos 031-036
//
// duplicates_sorted:   sorted array -> (value, count) for every value that appears 2+ times
// duplicates_unsorted: same result for an unsorted array of non-negative ints,
//                      ordered by value (use a count table, O(n + max))
// pair_sum_k:          unsorted, distinct values -> all pairs (a[i], a[j]) with i < j and
//                      a[i] + a[j] == k, in order of j then i. Use hashing, O(n + max).
//                      (Hint: when you reach a[j], look up k - a[j] among the earlier values.)
// pair_sum_k_sorted:   sorted, distinct values -> pairs (small, large), small ascending.
//                      Use two indices from both ends, O(n).
// min_max:             (min, max) in a single scan
#include <utility>
#include <vector>

#include "../../include/test.hpp"

using std::pair;
using std::vector;
using Pairs = vector<pair<int, int>>;

Pairs duplicates_sorted(const vector<int>& a) {
    // TODO: implement
    return {};
}

Pairs duplicates_unsorted(const vector<int>& a) {
    // TODO: implement
    return {};
}

Pairs pair_sum_k(const vector<int>& a, int k) {
    // TODO: implement
    return {};
}

Pairs pair_sum_k_sorted(const vector<int>& a, int k) {
    // TODO: implement
    return {};
}

pair<int, int> min_max(const vector<int>& a) {  // assume a is not empty
    // TODO: implement
    return {0, 0};
}

int main() {
    CHECK_EQ(duplicates_sorted({3, 6, 8, 8, 10, 12, 15, 15, 15, 20}), Pairs{{8, 2}, {15, 3}});
    CHECK_EQ(duplicates_sorted({1, 2, 3}), Pairs{});

    CHECK_EQ(duplicates_unsorted({8, 3, 6, 4, 6, 5, 6, 8, 2, 7}), Pairs{{6, 3}, {8, 2}});

    CHECK_EQ(pair_sum_k({6, 3, 8, 10, 16, 7, 5, 2, 9, 14}, 10), Pairs{{3, 7}, {8, 2}});
    CHECK_EQ(pair_sum_k({1, 2}, 100), Pairs{});

    CHECK_EQ(pair_sum_k_sorted({1, 3, 4, 5, 6, 8, 9, 10, 12, 14}, 10), Pairs{{1, 9}, {4, 6}});

    CHECK_EQ(min_max({5, 8, 3, 9, 6, 2, 10, 7, -1, 4}), pair<int, int>{-1, 10});
    CHECK_EQ(min_max({42}), pair<int, int>{42, 42});
    return TEST_SUMMARY();
}
