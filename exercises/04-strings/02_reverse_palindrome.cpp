// 04 - Strings: reverse, compare, palindrome
// Course: section 08, videos 006-007
//
// reverse_in_place: swap from both ends, no extra array
// compare:          like strcmp: negative / 0 / positive, case sensitive
// is_palindrome:    case sensitive
#include <string>

#include "../../include/test.hpp"

void reverse_in_place(char* s) {
    // TODO: implement
}

int compare(const char* a, const char* b) {
    // TODO: implement
    return 0;
}

bool is_palindrome(const char* s) {
    // TODO: implement
    return false;
}

int main() {
    char s[] = "python";
    reverse_in_place(s);
    CHECK_EQ(std::string(s), "nohtyp");
    char e[] = "";
    reverse_in_place(e);
    CHECK_EQ(std::string(e), "");

    CHECK(compare("painter", "painting") < 0);
    CHECK(compare("painting", "painter") > 0);
    CHECK_EQ(compare("same", "same"), 0);
    CHECK(compare("ab", "abc") < 0);
    CHECK(compare("Zebra", "apple") < 0);

    CHECK(is_palindrome("madam"));
    CHECK(is_palindrome("abba"));
    CHECK(is_palindrome(""));
    CHECK(!is_palindrome("Madam"));
    CHECK(!is_palindrome("abc"));
    return TEST_SUMMARY();
}
