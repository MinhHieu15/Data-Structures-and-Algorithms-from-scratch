// 07 - Stack: infix to postfix, and postfix evaluation
// Course: section 13, videos 013-022
//
// infix_to_postfix: operands are single letters or digits, no spaces.
//   Operators + - * / ^ and parentheses. ^ has the highest precedence and is
//   right-associative (a^b^c = a^(b^c)); the others are left-associative.
// evaluate_postfix: operands are single digits; + - * / (integer division).
#include <stack>
#include <string>

#include "../../include/test.hpp"

std::string infix_to_postfix(const std::string& infix) {
    // TODO: implement
    return "";
}

int evaluate_postfix(const std::string& postfix) {
    // TODO: implement
    return 0;
}

int main() {
    CHECK_EQ(infix_to_postfix("a+b*c-d/e"), "abc*+de/-");
    CHECK_EQ(infix_to_postfix("a+b+c"), "ab+c+");
    CHECK_EQ(infix_to_postfix("a^b^c"), "abc^^");
    CHECK_EQ(infix_to_postfix("((a+b)*c)-d^e^f"), "ab+c*def^^-");
    CHECK_EQ(infix_to_postfix("(a+b)*(c-d)"), "ab+cd-*");

    CHECK_EQ(evaluate_postfix("35*62/+4-"), 14);
    CHECK_EQ(evaluate_postfix("234*+82/-"), 10);
    CHECK_EQ(evaluate_postfix("7"), 7);
    return TEST_SUMMARY();
}
