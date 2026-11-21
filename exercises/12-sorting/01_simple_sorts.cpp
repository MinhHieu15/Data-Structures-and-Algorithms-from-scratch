// 12 - Sorting: bubble, insertion, selection
// Course: section 20, videos 001-013
//
// Sort ascending, in place. bubble_sort must stop early when a pass makes no swap
// (adaptive); it returns the number of passes it made so the test can check that.
#include <utility>
#include <vector>

#include "sort_check.hpp"

using std::vector;

int bubble_sort(vector<int>& a) {
    // TODO: implement
    return 0;
}

void insertion_sort(vector<int>& a) {
    // TODO: implement
}

void selection_sort(vector<int>& a) {
    // TODO: implement
}

int main() {
    check_sort("bubble_sort", [](vector<int>& v) { bubble_sort(v); });
    check_sort("insertion_sort", insertion_sort);
    check_sort("selection_sort", selection_sort);

    vector<int> sorted{1, 2, 3, 4, 5, 6};
    CHECK_EQ(bubble_sort(sorted), 1);  // already sorted: one pass, no swaps
    return TEST_SUMMARY();
}
