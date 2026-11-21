// 05 - Sparse matrix and polynomial (array representation)
// Course: section 10, videos 001-012
//
// add_sparse:    both matrices have the same size; elements are sorted by (row, col).
//                Return the sum, also sorted, dropping elements that become 0.
// poly_eval:     terms in any order; use exponents (pow or a loop)
// poly_add:      terms sorted by exponent, descending; result the same way, no zero terms
#include <vector>

#include "../../include/test.hpp"

struct Element {
    int i, j, x;
    bool operator==(const Element& o) const { return i == o.i && j == o.j && x == o.x; }
};
std::ostream& operator<<(std::ostream& os, const Element& e) {
    return os << "{" << e.i << "," << e.j << "," << e.x << "}";
}

struct Term {
    int coeff, exp;
    bool operator==(const Term& o) const { return coeff == o.coeff && exp == o.exp; }
};
std::ostream& operator<<(std::ostream& os, const Term& t) {
    return os << t.coeff << "x^" << t.exp;
}

using Sparse = std::vector<Element>;
using Poly = std::vector<Term>;

Sparse add_sparse(const Sparse& a, const Sparse& b) {
    // TODO: implement
    return {};
}

long long poly_eval(const Poly& p, int x) {
    // TODO: implement
    return 0;
}

Poly poly_add(const Poly& a, const Poly& b) {
    // TODO: implement
    return {};
}

int main() {
    Sparse a{{1, 4, 6}, {2, 2, 7}, {3, 2, 2}, {3, 5, 5}, {4, 4, 9}, {5, 1, 8}};
    Sparse b{{1, 3, 3}, {2, 2, -7}, {3, 2, 5}, {4, 1, 4}, {4, 4, 2}};
    CHECK_EQ(add_sparse(a, b),
             Sparse{{1, 3, 3}, {1, 4, 6}, {3, 2, 7}, {3, 5, 5}, {4, 1, 4}, {4, 4, 11}, {5, 1, 8}});
    CHECK_EQ(add_sparse(a, {}), a);

    Poly p{{3, 5}, {2, 4}, {5, 2}, {2, 1}, {7, 0}};  // 3x^5 + 2x^4 + 5x^2 + 2x + 7
    CHECK_EQ(poly_eval(p, 0), 7LL);
    CHECK_EQ(poly_eval(p, 1), 19LL);
    CHECK_EQ(poly_eval(p, 2), 159LL);

    Poly q{{5, 4}, {2, 2}, {-2, 1}, {3, 0}};
    CHECK_EQ(poly_add(p, q), Poly{{3, 5}, {7, 4}, {7, 2}, {10, 0}});
    return TEST_SUMMARY();
}
