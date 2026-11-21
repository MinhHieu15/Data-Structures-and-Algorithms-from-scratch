// 12 - Sorting: count sort, radix sort, shell sort
// Course: section 20, videos 024-029
//
// Values are non-negative integers.
// count_sort: count array of size max + 1
// radix_sort: LSD radix sort, base 10, one stable pass per digit (bins or counting)
// shell_sort: gaps n/2, n/4, ..., 1 with insertion sort on each gap
#include <vector>

#include "sort_check.hpp"

using std::vector;

void count_sort(vector<int>& a) {
    // TODO: implement
}

void radix_sort(vector<int>& a) {
    // TODO: implement
}

void shell_sort(vector<int>& a) {
    // TODO: implement
}

int main() {
    check_sort("count_sort", count_sort, 200);
    check_sort("radix_sort", radix_sort, 99999);
    check_sort("shell_sort", shell_sort);
    return TEST_SUMMARY();
}
