// 03 - Arrays: merging and set operations
// Course: section 07, videos 021-024
//
// Inputs are sorted. For the set operations the inputs have no duplicates.
// Do it in one pass with two indices i and j (O(m + n)), no std::sort / std::set.
#include <vector>

#include "../../include/test.hpp"

using std::vector;

vector<int> merge_sorted(const vector<int>& a, const vector<int>& b) {
    // TODO: implement
    return {};
}

vector<int> set_union(const vector<int>& a, const vector<int>& b) {
    // TODO: implement
    return {};
}

vector<int> set_intersection(const vector<int>& a, const vector<int>& b) {
    // TODO: implement
    return {};
}

vector<int> set_difference(const vector<int>& a, const vector<int>& b) {  // a - b
    // TODO: implement
    return {};
}

int main() {
    CHECK_EQ(merge_sorted({3, 8, 16, 20, 25}, {4, 10, 12, 22, 23}),
             {3, 4, 8, 10, 12, 16, 20, 22, 23, 25});
    CHECK_EQ(merge_sorted({}, {1, 2}), {1, 2});
    CHECK_EQ(merge_sorted({1, 1}, {1}), {1, 1, 1});

    vector<int> a{3, 5, 10, 16, 18}, b{2, 4, 5, 6, 10};
    CHECK_EQ(set_union(a, b), {2, 3, 4, 5, 6, 10, 16, 18});
    CHECK_EQ(set_intersection(a, b), {5, 10});
    CHECK_EQ(set_difference(a, b), {3, 16, 18});
    CHECK_EQ(set_difference(b, a), {2, 4, 6});
    CHECK_EQ(set_intersection(a, {}), {});
    return TEST_SUMMARY();
}
