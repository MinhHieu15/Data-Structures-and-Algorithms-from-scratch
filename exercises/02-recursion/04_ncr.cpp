// 02 - Recursion: nCr using Pascal's triangle
// Course: section 05, videos 029-030
//
//   nCr = (n-1)C(r-1) + (n-1)Cr,   nC0 = nCn = 1
#include "../../include/test.hpp"

long long ncr(int n, int r) {
    // TODO: implement
    return 0;
}

int main() {
    CHECK_EQ(ncr(0, 0), 1LL);
    CHECK_EQ(ncr(5, 0), 1LL);
    CHECK_EQ(ncr(5, 5), 1LL);
    CHECK_EQ(ncr(5, 2), 10LL);
    CHECK_EQ(ncr(10, 3), 120LL);
    CHECK_EQ(ncr(20, 10), 184756LL);
    return TEST_SUMMARY();
}
