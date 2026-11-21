// 17 - Dynamic programming: maximum subarray sum (Kadane)
// Course: section 27, videos 016-019
//
// kadane:       largest sum of a non-empty contiguous subarray, O(n), O(1) space
// kadane_range: same, but also return the [start, end] indices of that subarray.
#include <utility>
#include <vector>

#include "../../include/test.hpp"

using std::pair;
using std::vector;

long long kadane(const vector<int>& a) {
    // TODO: implement
    return 0;
}

pair<int, int> kadane_range(const vector<int>& a) {
    // TODO: implement
    return {0, 0};
}

int main() {
    vector<int> a{-2, 1, -3, 4, -1, 2, 1, -5, 4};
    CHECK_EQ(kadane(a), 6LL);
    CHECK_EQ(kadane_range(a), pair<int, int>{3, 6});

    vector<int> b{5, -9, 6, -2, 3};
    CHECK_EQ(kadane(b), 7LL);
    CHECK_EQ(kadane_range(b), pair<int, int>{2, 4});

    vector<int> neg{-3, -1, -2};
    CHECK_EQ(kadane(neg), -1LL);
    CHECK_EQ(kadane_range(neg), pair<int, int>{1, 1});
    CHECK_EQ(kadane({7}), 7LL);
    return TEST_SUMMARY();
}
