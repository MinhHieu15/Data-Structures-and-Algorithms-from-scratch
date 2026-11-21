// 03 - Arrays: student challenges, missing elements
// Course: section 07, videos 028-030
//
// single_missing:   sorted values 1..n with exactly one missing -> return it (use sum formula)
// missing_sorted:   sorted array (any start) -> all missing values between first and last
//                   (use the "difference = value - index" trick)
// missing_unsorted: unsorted array -> all missing values between min and max, in increasing
//                   order (use a hash/bit table indexed by value)
#include <vector>

#include "../../include/test.hpp"

using std::vector;

int single_missing(const vector<int>& a, int n) {
    // TODO: implement
    return 0;
}

vector<int> missing_sorted(const vector<int>& a) {
    // TODO: implement
    return {};
}

vector<int> missing_unsorted(const vector<int>& a) {
    // TODO: implement
    return {};
}

int main() {
    CHECK_EQ(single_missing({1, 2, 3, 4, 5, 6, 8, 9, 10, 11, 12}, 12), 7);
    CHECK_EQ(single_missing({2, 3}, 3), 1);

    CHECK_EQ(missing_sorted({6, 7, 8, 9, 11, 12, 15, 16, 17, 18, 19}), {10, 13, 14});
    CHECK_EQ(missing_sorted({1, 2, 3}), {});
    CHECK_EQ(missing_sorted({4, 9}), {5, 6, 7, 8});

    CHECK_EQ(missing_unsorted({3, 7, 4, 9, 12, 6, 1, 11, 2, 10}), {5, 8});
    CHECK_EQ(missing_unsorted({5}), {});
    return TEST_SUMMARY();
}
