// 17 - Dynamic programming: longest common subsequence
// Course: section 27, videos 012-015
//
// lcs_length: tabulation, L[i][j] = LCS of a[0..i) and b[0..j)
// lcs_string: one LCS, rebuilt from the table starting at L[m][n]:
//             if a[i-1] == b[j-1] take it and go diagonal;
//             else go up (i-1) when L[i-1][j] >= L[i][j-1], otherwise go left.
#include <string>
#include <vector>

#include "../../include/test.hpp"

using std::string;
using std::vector;


int lcs_length(const string& a, const string& b) {
    // TODO: implement
    return 0;
}

string lcs_string(const string& a, const string& b) {
    // TODO: implement
    return "";
}

int main() {
    CHECK_EQ(lcs_length("abcdefghij", "cdgi"), 4);
    CHECK_EQ(lcs_string("abcdefghij", "cdgi"), "cdgi");
    CHECK_EQ(lcs_length("stone", "longest"), 3);
    CHECK_EQ(lcs_string("stone", "longest"), "one");
    CHECK_EQ(lcs_length("ABCBDAB", "BDCABA"), 4);
    CHECK_EQ(lcs_string("ABCBDAB", "BDCABA").size(), (std::size_t)4);
    CHECK_EQ(lcs_length("abc", "xyz"), 0);
    CHECK_EQ(lcs_string("", "abc"), "");
    return TEST_SUMMARY();
}
