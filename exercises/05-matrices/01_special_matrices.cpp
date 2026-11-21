// 05 - Matrices: storing special matrices in a 1D array
// Course: section 09, videos 002-014
//
// Indices i, j start at 1 (like the course). Only the non-zero part is stored.
//   Diagonal:        store n elements, A[i-1] for i == j
//   LowerTriangular: row-major, n(n+1)/2 elements, index = i(i-1)/2 + (j-1) for i >= j
//   Toeplitz:        2n-1 elements: first row then first column (without A[1][1])
// get() returns 0 for positions that are not stored; set() ignores them.
#include <vector>

#include "../../include/test.hpp"

class Diagonal {
    int n;
    std::vector<int> A;

public:
    explicit Diagonal(int n) : n(n), A(n, 0) {}
    void set(int i, int j, int x) {
        // TODO: implement
    }
    int get(int i, int j) const {
        // TODO: implement
        return 0;
    }
    int dim() const { return n; }
};

class LowerTriangular {
    int n;
    std::vector<int> A;

public:
    explicit LowerTriangular(int n) : n(n), A(n * (n + 1) / 2, 0) {}
    int index(int i, int j) const {  // row-major mapping
        // TODO: implement
        return 0;
    }
    void set(int i, int j, int x) {
        // TODO: implement
    }
    int get(int i, int j) const {
        // TODO: implement
        return 0;
    }
    int dim() const { return n; }
};

class Toeplitz {  // every diagonal is constant: M[i][j] == M[i-1][j-1]
    int n;
    std::vector<int> A;  // A[0..n-1] = first row, A[n..2n-2] = first column rows 2..n

public:
    explicit Toeplitz(int n) : n(n), A(2 * n - 1, 0) {}
    void set_first_row(int j, int x) { A[j - 1] = x; }
    void set_first_col(int i, int x) {
        if (i == 1) A[0] = x;
        else A[n + i - 2] = x;
    }
    int get(int i, int j) const {
        // TODO: implement
        return 0;
    }
};

int main() {
    Diagonal d(4);
    d.set(1, 1, 5);
    d.set(4, 4, 9);
    d.set(1, 2, 7);  // ignored
    CHECK_EQ(d.get(1, 1), 5);
    CHECK_EQ(d.get(4, 4), 9);
    CHECK_EQ(d.get(1, 2), 0);

    LowerTriangular lt(4);
    CHECK_EQ(lt.index(1, 1), 0);
    CHECK_EQ(lt.index(3, 2), 4);
    CHECK_EQ(lt.index(4, 4), 9);
    int v = 1;
    for (int i = 1; i <= 4; i++)
        for (int j = 1; j <= i; j++) lt.set(i, j, v++);
    CHECK_EQ(lt.get(1, 1), 1);
    CHECK_EQ(lt.get(3, 2), 5);
    CHECK_EQ(lt.get(4, 4), 10);
    CHECK_EQ(lt.get(2, 3), 0);

    // 2 3 4 5
    // 6 2 3 4
    // 7 6 2 3
    // 8 7 6 2
    Toeplitz t(4);
    int row[] = {2, 3, 4, 5}, col[] = {2, 6, 7, 8};
    for (int k = 1; k <= 4; k++) {
        t.set_first_row(k, row[k - 1]);
        t.set_first_col(k, col[k - 1]);
    }
    CHECK_EQ(t.get(1, 4), 5);
    CHECK_EQ(t.get(3, 3), 2);
    CHECK_EQ(t.get(2, 4), 4);
    CHECK_EQ(t.get(4, 1), 8);
    CHECK_EQ(t.get(4, 2), 7);
    CHECK_EQ(t.get(3, 2), 6);
    return TEST_SUMMARY();
}
