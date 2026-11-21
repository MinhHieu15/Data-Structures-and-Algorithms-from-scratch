// Tiny test helper used by every exercise. No external library needed.
//
//   CHECK(cond)                    passes when cond is true
//   CHECK_EQ(actual, expected)     passes when actual == expected
//   CHECK_NEAR(actual, expected, eps)
//   return TEST_SUMMARY();         put at the end of main()
//
// Only failures are printed, followed by a one-line summary.
// The program exits with 0 when every check passed, 1 otherwise.
#pragma once

#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include <utility>
#include <vector>

namespace dsa_test {

inline int passed = 0;
inline int failed = 0;

template <class T> struct same { using type = T; };

// ---- printing values in failure messages ----
inline std::string show(const std::string& s) { return "\"" + s + "\""; }
inline std::string show(const char* s) { return s ? show(std::string(s)) : "nullptr"; }
inline std::string show(char c) { return std::string("'") + c + "'"; }
inline std::string show(bool b) { return b ? "true" : "false"; }
template <class A, class B> std::string show(const std::pair<A, B>& p);
template <class T> std::string show(const std::vector<T>& v);
template <class T> std::string show(const T& x);

template <class A, class B> std::string show(const std::pair<A, B>& p) {
    return "(" + show(p.first) + ", " + show(p.second) + ")";
}
template <class T> std::string show(const std::vector<T>& v) {
    std::string out = "[";
    for (std::size_t i = 0; i < v.size(); ++i) {
        if (i) out += ", ";
        out += show(v[i]);
    }
    return out + "]";
}
template <class T> std::string show(const T& x) {
    std::ostringstream os;
    os << x;
    return os.str();
}

// ---- checks ----
inline void report_fail(const char* expr, const char* file, int line, const std::string& detail) {
    ++failed;
    std::cout << "[FAIL] " << file << ":" << line << "  " << expr << "\n";
    if (!detail.empty()) std::cout << "       " << detail << "\n";
}

inline void check(bool ok, const char* expr, const char* file, int line) {
    if (ok) ++passed;
    else report_fail(expr, file, line, "");
}

template <class A>
void check_eq(const char* expr, const char* file, int line,
              const A& actual, const typename same<A>::type& expected) {
    if (actual == expected) ++passed;
    else report_fail(expr, file, line, "expected " + show(expected) + ", got " + show(actual));
}

inline void check_near(const char* expr, const char* file, int line,
                       double actual, double expected, double eps) {
    if (std::fabs(actual - expected) <= eps) ++passed;
    else report_fail(expr, file, line, "expected " + show(expected) + " (+/- " + show(eps) +
                                           "), got " + show(actual));
}

inline int summary(const char* file) {
    int total = passed + failed;
    std::string name = file;
    std::size_t slash = name.find_last_of("/\\");
    if (slash != std::string::npos) name = name.substr(slash + 1);
    std::cout << (failed ? "FAILED " : "PASSED ") << name << ": " << passed << "/" << total
              << " checks passed\n";
    return failed ? 1 : 0;
}

}  // namespace dsa_test

#define CHECK(cond) dsa_test::check((cond), #cond, __FILE__, __LINE__)
#define CHECK_EQ(actual, ...) \
    dsa_test::check_eq(#actual, __FILE__, __LINE__, (actual), __VA_ARGS__)
#define CHECK_NEAR(actual, expected, eps) \
    dsa_test::check_near(#actual, __FILE__, __LINE__, (actual), (expected), (eps))
#define TEST_SUMMARY() dsa_test::summary(__FILE__)
