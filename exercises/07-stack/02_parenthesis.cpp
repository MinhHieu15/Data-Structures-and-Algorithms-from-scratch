// 07 - Stack: parenthesis matching
// Course: section 13, videos 009-012
//
// Return true when every (, [, { is closed by the matching bracket in the right order.
// Other characters are ignored. Use a stack (std::stack or your own).
#include <stack>
#include <string>

#include "../../include/test.hpp"

bool is_balanced(const std::string& exp) {
    // TODO: implement
    return false;
}

int main() {
    CHECK(is_balanced("((a+b)*(c-d))"));
    CHECK(is_balanced("{([a+b]*[c-d])/e}"));
    CHECK(is_balanced(""));
    CHECK(!is_balanced("((a+b)*(c-d)"));
    CHECK(!is_balanced("(a+b))"));
    CHECK(!is_balanced("{[(])}"));
    CHECK(!is_balanced("]"));
    return TEST_SUMMARY();
}
