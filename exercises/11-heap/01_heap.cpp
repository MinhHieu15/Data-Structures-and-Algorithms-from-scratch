// 11 - Heap: insert, delete, heapify, heap sort (max heap)
// Course: section 19, videos 001-008
//
// The heap lives in a std::vector<int> with index 0 used as the root:
//   children of i are 2i+1 and 2i+2, parent of i is (i-1)/2.
// heap_insert:    push_back then move the element up
// heap_delete:    remove and return the max (-1 if empty): move last to root, then move down
// heapify:        turn any vector into a max heap in O(n) (start from the last parent)
// heap_sort:      sort ascending in place using the heap (no std::sort)
#include <algorithm>
#include <random>
#include <vector>

#include "../../include/test.hpp"

using std::vector;

void heap_insert(vector<int>& h, int x) {
    // TODO: implement
}


int heap_delete(vector<int>& h) {
    // TODO: implement
    return -1;
}

void heapify(vector<int>& a) {
    // TODO: implement
}

void heap_sort(vector<int>& a) {
    // TODO: implement
}

bool is_max_heap(const vector<int>& h) {
    for (std::size_t i = 1; i < h.size(); i++)
        if (h[(i - 1) / 2] < h[i]) return false;
    return true;
}

int main() {
    vector<int> h;
    for (int x : {10, 20, 30, 25, 5, 40, 35}) heap_insert(h, x);
    CHECK_EQ(h, {40, 25, 35, 10, 5, 20, 30});
    CHECK(is_max_heap(h));

    CHECK_EQ(heap_delete(h), 40);
    CHECK_EQ(heap_delete(h), 35);
    CHECK(is_max_heap(h));
    CHECK_EQ((int)h.size(), 5);
    vector<int> empty;
    CHECK_EQ(heap_delete(empty), -1);

    vector<int> a{5, 10, 30, 20, 35, 40, 15};
    heapify(a);
    CHECK(is_max_heap(a));
    CHECK_EQ(a[0], 40);

    std::mt19937 rng(42);
    for (int t = 0; t < 20; t++) {
        vector<int> v(rng() % 50);
        for (int& x : v) x = (int)(rng() % 100);
        vector<int> expected = v;
        std::sort(expected.begin(), expected.end());
        heap_sort(v);
        CHECK_EQ(v, expected);
    }
    return TEST_SUMMARY();
}
