// 02 - Recursion: sum, factorial, power
// Course: section 05, videos 016-021
//
// Solve each one with recursion (no loops).
// power(m, n) should use the faster idea from the course:
//   m^n = (m*m)^(n/2)        when n is even
//   m^n = m * (m*m)^(n/2)    when n is odd
#include "../../include/test.hpp"

int sum_n(int n) {
    // TODO: implement
    return 0;
}

long long factorial(int n) {
    // TODO: implement
    return 0;
}

long long power(long long m, int n) {
    // TODO: implement
    return 0;
}

int main() {
    CHECK_EQ(sum_n(0), 0);
    CHECK_EQ(sum_n(5), 15);
    CHECK_EQ(sum_n(100), 5050);

    CHECK_EQ(factorial(0), 1LL);
    CHECK_EQ(factorial(5), 120LL);
    CHECK_EQ(factorial(15), 1307674368000LL);

    CHECK_EQ(power(2, 0), 1LL);
    CHECK_EQ(power(2, 10), 1024LL);
    CHECK_EQ(power(3, 5), 243LL);
    CHECK_EQ(power(2, 40), 1099511627776LL);
    return TEST_SUMMARY();
}
