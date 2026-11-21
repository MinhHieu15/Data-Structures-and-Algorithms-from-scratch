// 17 - Dynamic programming: matrix chain multiplication
// Course: section 27, videos 008-011
//
// Matrix i has size d[i-1] x d[i] (i = 1..n, so d has n + 1 values).
// mcm_cost: the minimum number of scalar multiplications to multiply all n matrices.
//           Fill m[i][j] by chain length (tabulation), like the course.
// mcm_parens: the optimal order as a string, e.g. "((A1A2)A3)". Use the split table s[i][j].
//             When several splits are equally good, pick the smallest k.
#include <climits>
#include <string>
#include <vector>

#include "../../include/test.hpp"

using std::string;
using std::vector;


long long mcm_cost(const vector<int>& d) {
    // TODO: implement
    return 0;
}

string mcm_parens(const vector<int>& d) {
    // TODO: implement
    return "";
}

int main() {
    // course example: A1 5x4, A2 4x6, A3 6x2, A4 2x7
    vector<int> d{5, 4, 6, 2, 7};
    CHECK_EQ(mcm_cost(d), 158LL);
    CHECK_EQ(mcm_parens(d), "((A1(A2A3))A4)");

    vector<int> d2{10, 30, 5, 60};
    CHECK_EQ(mcm_cost(d2), 4500LL);
    CHECK_EQ(mcm_parens(d2), "((A1A2)A3)");

    CHECK_EQ(mcm_cost({3, 4}), 0LL);
    CHECK_EQ(mcm_parens({3, 4}), "A1");
    return TEST_SUMMARY();
}
