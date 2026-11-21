// 02 - Recursion: Fibonacci with memoization
// Course: section 05, videos 027-028
//
// fib(0) = 0, fib(1) = 1, fib(n) = fib(n-1) + fib(n-2)
// fib_memo must be fast for n = 90 (plain tree recursion would take years).
// fib_iterative: loop, O(1) extra space.
#include <vector>

#include "../../include/test.hpp"

long long fib_memo(int n, std::vector<long long>& memo) {  // memo[i] == -1 means unknown
    // TODO: implement
    return 0;
}

long long fib(int n) {
    std::vector<long long> memo(n + 1, -1);
    return fib_memo(n, memo);
}

long long fib_iterative(int n) {
    // TODO: implement
    return 0;
}

int main() {
    CHECK_EQ(fib(0), 0LL);
    CHECK_EQ(fib(1), 1LL);
    CHECK_EQ(fib(10), 55LL);
    CHECK_EQ(fib(50), 12586269025LL);
    CHECK_EQ(fib(90), 2880067194370816120LL);

    CHECK_EQ(fib_iterative(0), 0LL);
    CHECK_EQ(fib_iterative(7), 13LL);
    CHECK_EQ(fib_iterative(90), 2880067194370816120LL);
    return TEST_SUMMARY();
}
