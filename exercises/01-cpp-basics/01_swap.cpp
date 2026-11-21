// 01 - C/C++ basics: parameter passing
// Course: section 02, videos 005-014 (pointers, references, parameter passing)
//
// Implement swap two ways: call by address (pointers) and call by reference.
// Then implement array_sum, which receives an array as a parameter.
#include "../../include/test.hpp"

void swap_by_address(int* a, int* b) {
    // TODO: implement
}

void swap_by_reference(int& a, int& b) {
    // TODO: implement
}

// Arrays are always passed by address: A points to the first element.
int array_sum(const int A[], int n) {
    // TODO: implement
    return 0;
}

int main() {
    int x = 10, y = 20;
    swap_by_address(&x, &y);
    CHECK_EQ(x, 20);
    CHECK_EQ(y, 10);

    swap_by_reference(x, y);
    CHECK_EQ(x, 10);
    CHECK_EQ(y, 20);

    int A[] = {2, 4, 6, 8, 10};
    CHECK_EQ(array_sum(A, 5), 30);
    CHECK_EQ(array_sum(A, 0), 0);
    return TEST_SUMMARY();
}
