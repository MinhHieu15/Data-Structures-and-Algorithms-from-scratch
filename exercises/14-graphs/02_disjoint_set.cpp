// 14 - Graphs: disjoint sets (union-find)
// Course: section 22, video 009 (used again by Kruskal in section 26)
//
// Like the course, use a single array `parent`:
//   parent[x] < 0  means x is a root and -parent[x] is the size of its set
//   parent[x] >= 0 means parent[x] is x's parent
// find:  return the root, and compress the path (point every visited node at the root)
// unite: union by size (the smaller set goes under the bigger one).
//        Return false if x and y were already in the same set (that edge makes a cycle).
#include <vector>

#include "../../include/test.hpp"

class DisjointSet {
    std::vector<int> parent;

public:
    explicit DisjointSet(int n) : parent(n, -1) {}

    int find(int x) {
        // TODO: implement
        return x;
    }

    bool unite(int x, int y) {
        // TODO: implement
        return false;
    }

    int set_size(int x) {
        // TODO: implement
        return 0;
    }
};

int main() {
    DisjointSet ds(8);
    CHECK(ds.find(3) == 3);
    CHECK(ds.unite(0, 1));
    CHECK(ds.unite(2, 3));
    CHECK(ds.unite(1, 3));
    CHECK(!ds.unite(0, 2));  // already connected: this edge would form a cycle
    CHECK(ds.find(0) == ds.find(3));
    CHECK(ds.find(0) != ds.find(4));
    CHECK_EQ(ds.set_size(2), 4);
    CHECK_EQ(ds.set_size(5), 1);
    CHECK(ds.unite(5, 6));
    CHECK(ds.unite(6, 7));
    CHECK(ds.unite(7, 0));
    CHECK_EQ(ds.set_size(4), 1);
    CHECK_EQ(ds.set_size(0), 7);
    return TEST_SUMMARY();
}
