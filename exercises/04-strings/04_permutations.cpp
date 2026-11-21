// 04 - Strings: all permutations of a string
// Course: section 08, video 011
//
// Return every permutation of s (all characters distinct) in lexicographic order
// when s itself is sorted. Use the course's backtracking idea: a `used` array and a
// result buffer, trying characters left to right.
#include <string>
#include <vector>

#include "../../include/test.hpp"


std::vector<std::string> permutations(const std::string& s) {
    // TODO: implement
    return {};
}

int main() {
    CHECK_EQ(permutations("abc"),
             std::vector<std::string>{"abc", "acb", "bac", "bca", "cab", "cba"});
    CHECK_EQ(permutations("a"), std::vector<std::string>{"a"});
    CHECK_EQ(permutations("abcde").size(), (std::size_t)120);
    return TEST_SUMMARY();
}
