// Shared helper for the sorting exercises (already done, just use it).
// Runs `sort_fn` on many random arrays and compares with std::sort.
#pragma once
#include <algorithm>
#include <random>
#include <vector>

#include "../../include/test.hpp"

template <class F>
void check_sort(const char* name, F sort_fn, int max_value = 1000) {
    std::mt19937 rng(2024);
    std::vector<std::vector<int>> cases{{}, {1}, {2, 1}, {5, 5, 5}, {1, 2, 3, 4}, {4, 3, 2, 1}};
    for (int t = 0; t < 30; t++) {
        std::vector<int> v(rng() % 60);
        for (int& x : v) x = (int)(rng() % (max_value + 1));
        cases.push_back(v);
    }
    int ok = 0;
    for (auto v : cases) {
        auto expected = v;
        std::sort(expected.begin(), expected.end());
        sort_fn(v);
        if (v == expected) ok++;
    }
    if (ok == (int)cases.size()) dsa_test::passed++;
    else {
        dsa_test::failed++;
        std::cout << "[FAIL] " << name << ": sorted " << ok << "/" << cases.size()
                  << " test arrays correctly\n";
    }
}
