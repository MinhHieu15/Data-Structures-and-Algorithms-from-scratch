// 02 - Recursion: Taylor series of e^x
// Course: section 05, videos 022-026
//
//   e^x = 1 + x/1! + x^2/2! + ... + x^n/n!      (n+1 terms)
//
// taylor_recursive: plain recursion (you may use static variables, like the course).
// taylor_horner:    Horner's rule, O(n) multiplications:
//   e^x = 1 + x/1 (1 + x/2 (1 + x/3 (... (1 + x/n))))
#include "../../include/test.hpp"

double taylor_recursive(double x, int n) {
    // TODO: implement
    return 0;
}

double taylor_horner(double x, int n) {
    // TODO: implement
    return 0;
}

int main() {
    CHECK_NEAR(taylor_recursive(1, 0), 1.0, 1e-9);
    CHECK_NEAR(taylor_recursive(1, 1), 2.0, 1e-9);
    CHECK_NEAR(taylor_recursive(1, 15), 2.718281828, 1e-6);
    CHECK_NEAR(taylor_recursive(2, 20), 7.389056099, 1e-6);  // call twice: static vars must reset

    CHECK_NEAR(taylor_horner(1, 0), 1.0, 1e-9);
    CHECK_NEAR(taylor_horner(1, 2), 2.5, 1e-9);
    CHECK_NEAR(taylor_horner(1, 15), 2.718281828, 1e-6);
    CHECK_NEAR(taylor_horner(3, 30), 20.08553692, 1e-6);
    return TEST_SUMMARY();
}
