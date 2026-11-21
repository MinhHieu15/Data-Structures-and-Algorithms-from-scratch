// 13 - Hashing: open addressing (linear probing, quadratic probing, double hashing)
// Course: section 21, videos 004-008
//
// Table size 10, empty slots hold EMPTY (-1). Keys are non-negative and distinct.
//   linear:    index = (h(k) + i) % 10
//   quadratic: index = (h(k) + i*i) % 10
//   double:    index = (h1(k) + i * h2(k)) % 10, h1(k) = k % 10, h2(k) = 7 - (k % 7)
// probe() returns the slot where `key` is, or where it would be inserted:
// try i = 0, 1, 2, ... (at most 10 tries) and stop at the key or at an EMPTY slot.
// It returns -1 if it gives up. insert() returns false when no slot was found.
#include <vector>

#include "../../include/test.hpp"

constexpr int EMPTY = -1;
enum class Probe { Linear, Quadratic, Double };

class OpenHash {
    std::vector<int> T;
    Probe mode;

public:
    explicit OpenHash(Probe mode) : T(10, EMPTY), mode(mode) {}

    int probe(int key) const {
        // TODO: implement
        return -1;
    }

    bool insert(int key) {
        // TODO: implement
        return false;
    }

    bool search(int key) const {
        // TODO: implement
        return false;
    }

    const std::vector<int>& table() const { return T; }
};

int main() {
    const int E = EMPTY;
    OpenHash lin(Probe::Linear);
    for (int k : {26, 30, 45, 23, 25, 43, 74, 19, 29}) lin.insert(k);
    CHECK_EQ(lin.table(), {30, 29, E, 23, 43, 45, 26, 25, 74, 19});
    CHECK(lin.search(29));
    CHECK(lin.search(74));
    CHECK(!lin.search(39));

    OpenHash quad(Probe::Quadratic);
    for (int k : {23, 43, 13, 27}) quad.insert(k);
    CHECK_EQ(quad.table(), {E, E, E, 23, 43, E, E, 13, 27, E});
    CHECK(quad.search(13));
    CHECK(!quad.search(33));

    OpenHash dbl(Probe::Double);
    for (int k : {5, 25, 15, 35, 95}) dbl.insert(k);
    CHECK_EQ(dbl.table(), {E, 15, 35, E, 95, 5, E, E, 25, E});
    CHECK(dbl.search(95));
    CHECK(!dbl.search(45));
    return TEST_SUMMARY();
}
