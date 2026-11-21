// 04 - Strings: duplicates (bitwise) and anagrams
// Course: section 08, videos 008-010
//
// duplicate_letters: lowercase string -> the letters that appear more than once,
//                    in the order their 2nd occurrence is found, each letter once.
//                    Use a 32-bit int as a bit set: bit (c - 'a') marks "seen".
// is_anagram:        lowercase strings; use a count table of size 26
#include <string>

#include "../../include/test.hpp"

std::string duplicate_letters(const std::string& s) {
    // TODO: implement
    return "";
}

bool is_anagram(const std::string& a, const std::string& b) {
    // TODO: implement
    return false;
}

int main() {
    CHECK_EQ(duplicate_letters("finding"), "in");
    CHECK_EQ(duplicate_letters("abcabcaa"), "abc");
    CHECK_EQ(duplicate_letters("xyz"), "");

    CHECK(is_anagram("decimal", "medical"));
    CHECK(is_anagram("listen", "silent"));
    CHECK(!is_anagram("verbose", "observe1"));
    CHECK(!is_anagram("aab", "abb"));
    return TEST_SUMMARY();
}
