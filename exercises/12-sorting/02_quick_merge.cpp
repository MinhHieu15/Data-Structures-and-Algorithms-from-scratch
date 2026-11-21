// 12 - Sorting: quick sort and merge sort
// Course: section 20, videos 014-023
//
// partition(a, l, h): pivot = a[l]; place it at its sorted position inside a[l..h]
//                     and return that position. Smaller-or-equal values go left.
// quick_sort(a, l, h): sorts a[l..h] (inclusive).
// merge(a, l, mid, h): a[l..mid] and a[mid+1..h] are sorted; merge them in place
//                      (you may use a temporary vector).
// merge_sort_recursive(a, l, h)
// merge_sort_iterative(a): passes of size 2, 4, 8, ... (no recursion)
#include <utility>
#include <vector>

#include "sort_check.hpp"

using std::vector;

int partition(vector<int>& a, int l, int h) {
    // TODO: implement
    return l;
}

void quick_sort(vector<int>& a, int l, int h) {
    // TODO: implement
}

void merge(vector<int>& a, int l, int mid, int h) {
    // TODO: implement
}

void merge_sort_recursive(vector<int>& a, int l, int h) {
    // TODO: implement
}

void merge_sort_iterative(vector<int>& a) {
    // TODO: implement
}

int main() {
    vector<int> p{50, 70, 60, 90, 40, 80, 10, 20, 30};
    int k = partition(p, 0, (int)p.size() - 1);
    CHECK_EQ(k, 4);
    CHECK_EQ(p[4], 50);
    bool split_ok = true;
    for (int i = 0; i < 9; i++) split_ok &= (i < 4 ? p[i] <= 50 : p[i] >= 50);
    CHECK(split_ok);

    vector<int> m{2, 5, 8, 12, 3, 6, 7, 10};
    merge(m, 0, 3, 7);
    CHECK_EQ(m, {2, 3, 5, 6, 7, 8, 10, 12});

    check_sort("quick_sort", [](vector<int>& v) { quick_sort(v, 0, (int)v.size() - 1); });
    check_sort("merge_sort_recursive",
               [](vector<int>& v) { merge_sort_recursive(v, 0, (int)v.size() - 1); });
    check_sort("merge_sort_iterative", merge_sort_iterative);
    return TEST_SUMMARY();
}
