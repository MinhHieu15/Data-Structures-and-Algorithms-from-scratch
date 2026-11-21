// 04 - Strings: length, case, words, vowels, validation
// Course: section 08, videos 001-005
//
// Work on C strings (char arrays ending with '\0'). Do not use <cstring> or <cctype>:
// the point is to use ASCII codes ('a' - 'A' == 32).
#include <utility>

#include "../../include/test.hpp"

int length(const char* s) {
    // TODO: implement
    return 0;
}

void toggle_case(char* s) {  // "wELcOmE" -> "WelCoMe"; other characters unchanged
    // TODO: implement
}

// Returns (vowels, words). Words are separated by one or more spaces.
std::pair<int, int> count_vowels_words(const char* s) {
    // TODO: implement
    return {0, 0};
}

bool is_valid_name(const char* s) {  // only letters and digits, at least one character
    // TODO: implement
    return false;
}

int main() {
    CHECK_EQ(length("welcome"), 7);
    CHECK_EQ(length(""), 0);

    char s[] = "wELcOmE to C++ 2024";
    toggle_case(s);
    CHECK_EQ(std::string(s), "WelCoMe TO c++ 2024");

    CHECK_EQ(count_vowels_words("How are   you"), std::pair<int, int>{5, 3});
    CHECK_EQ(count_vowels_words("  Data Structures  "), std::pair<int, int>{5, 2});
    CHECK_EQ(count_vowels_words(""), std::pair<int, int>{0, 0});

    CHECK(is_valid_name("Ani321"));
    CHECK(!is_valid_name("Ani?321"));
    CHECK(!is_valid_name(""));
    return TEST_SUMMARY();
}
