// 03 - Arrays: the Array ADT
// Course: section 07, videos 001-020
//
// Build the Array class from the course. Elements live in a heap array A of
// capacity `size`; `length` is how many are in use.
//   append, insert, remove   (remove returns the deleted value, or -1 if index is bad)
//   linear_search            (returns index or -1)
//   binary_search            (array is sorted; iterative; index or -1)
//   get, set, max, sum, reverse, is_sorted, insert_sorted
#include <vector>

#include "../../include/test.hpp"

class Array {
    int* A;
    int size;
    int length;

public:
    explicit Array(int size) : A(new int[size]), size(size), length(0) {}
    ~Array() { delete[] A; }
    Array(const Array&) = delete;
    Array& operator=(const Array&) = delete;

    int len() const { return length; }
    std::vector<int> to_vector() const { return std::vector<int>(A, A + length); }

    void append(int x) {
        // TODO: implement
    }

    void insert(int index, int x) {  // 0 <= index <= length; ignore bad input
        // TODO: implement
    }

    int remove(int index) {
        // TODO: implement
        return -1;
    }

    int linear_search(int key) const {
        // TODO: implement
        return -1;
    }

    int binary_search(int key) const {
        // TODO: implement
        return -1;
    }

    int get(int index) const {  // -1 for a bad index
        // TODO: implement
        return -1;
    }

    void set(int index, int x) {
        // TODO: implement
    }

    int max() const {  // assume length > 0
        // TODO: implement
        return 0;
    }

    int sum() const {
        // TODO: implement
        return 0;
    }

    void reverse() {  // in place, swap from both ends
        // TODO: implement
    }

    bool is_sorted() const {
        // TODO: implement
        return false;
    }

    void insert_sorted(int x) {  // array is sorted; keep it sorted
        // TODO: implement
    }
};

int main() {
    Array arr(10);
    for (int x : {2, 3, 4, 5, 6}) arr.append(x);
    CHECK_EQ(arr.to_vector(), {2, 3, 4, 5, 6});

    arr.insert(0, 1);
    arr.insert(6, 7);
    arr.insert(3, 99);
    arr.insert(42, 0);  // ignored
    CHECK_EQ(arr.to_vector(), {1, 2, 3, 99, 4, 5, 6, 7});

    CHECK_EQ(arr.remove(3), 99);
    CHECK_EQ(arr.remove(100), -1);
    CHECK_EQ(arr.to_vector(), {1, 2, 3, 4, 5, 6, 7});

    CHECK_EQ(arr.linear_search(5), 4);
    CHECK_EQ(arr.linear_search(50), -1);
    CHECK_EQ(arr.binary_search(1), 0);
    CHECK_EQ(arr.binary_search(7), 6);
    CHECK_EQ(arr.binary_search(4), 3);
    CHECK_EQ(arr.binary_search(8), -1);

    CHECK_EQ(arr.get(2), 3);
    CHECK_EQ(arr.get(-1), -1);
    arr.set(0, 10);
    CHECK_EQ(arr.max(), 10);
    CHECK_EQ(arr.sum(), 37);
    CHECK(!arr.is_sorted());
    arr.set(0, 1);
    CHECK(arr.is_sorted());

    arr.insert_sorted(0);
    arr.insert_sorted(5);
    CHECK_EQ(arr.to_vector(), {0, 1, 2, 3, 4, 5, 5, 6, 7});

    arr.reverse();
    CHECK_EQ(arr.to_vector(), {7, 6, 5, 5, 4, 3, 2, 1, 0});
    CHECK_EQ(arr.len(), 9);
    return TEST_SUMMARY();
}
