// 15 - Divide and conquer
// Course: section 25, videos 001-008 (and section 27, video 020)
//
// binary_search_rec: recursive, sorted array, index or -1
// max_min:           (min, max) by splitting the array in halves
// k_way_merge:       merge k sorted lists by merging them in pairs, like merge sort passes
// max_subarray_dc:   largest sum of a non-empty contiguous subarray, divide and conquer
//                    (best of: left half, right half, best crossing the middle)
#include <utility>
#include <vector>

#include "../../include/test.hpp"

using std::pair;
using std::vector;

int binary_search_rec(const vector<int>& a, int l, int h, int key) {
    // TODO: implement
    return -1;
}

pair<int, int> max_min(const vector<int>& a, int l, int h) {  // returns (min, max)
    // TODO: implement
    return {0, 0};
}

vector<int> k_way_merge(vector<vector<int>> lists) {
    // TODO: implement
    return {};
}

long long max_subarray_dc(const vector<int>& a, int l, int h) {
    // TODO: implement
    return 0;
}

int main() {
    vector<int> a{4, 8, 10, 15, 18, 21, 24, 27, 29, 33, 34, 37, 39, 41, 43};
    int n = (int)a.size();
    CHECK_EQ(binary_search_rec(a, 0, n - 1, 18), 4);
    CHECK_EQ(binary_search_rec(a, 0, n - 1, 4), 0);
    CHECK_EQ(binary_search_rec(a, 0, n - 1, 43), 14);
    CHECK_EQ(binary_search_rec(a, 0, n - 1, 25), -1);

    vector<int> b{8, -3, 12, 7, 0, 25, -9, 4};
    CHECK_EQ(max_min(b, 0, 7), pair<int, int>{-9, 25});

    CHECK_EQ(k_way_merge({{1, 9}, {2, 3, 10}, {4}, {5, 6, 7, 8}}), {1, 2, 3, 4, 5, 6, 7, 8, 9, 10});
    CHECK_EQ(k_way_merge({{3, 4}}), {3, 4});

    vector<int> c{-2, 1, -3, 4, -1, 2, 1, -5, 4};
    CHECK_EQ(max_subarray_dc(c, 0, 8), 6LL);
    vector<int> neg{-8, -3, -6};
    CHECK_EQ(max_subarray_dc(neg, 0, 2), -3LL);
    return TEST_SUMMARY();
}
