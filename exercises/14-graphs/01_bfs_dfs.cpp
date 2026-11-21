// 14 - Graphs: breadth first search and depth first search
// Course: section 22, videos 001-008
//
// The graph is an adjacency matrix: adj[u][v] == 1 means an edge u -> v.
// Vertices are 0..n-1. Always visit neighbours in increasing vertex order.
// Return the vertices in the order they are visited.
// dfs: recursive (or with your own stack, but the order must match the recursive one).
#include <queue>
#include <vector>

#include "../../include/test.hpp"

using std::vector;
using Matrix = vector<vector<int>>;

vector<int> bfs(const Matrix& adj, int start) {
    // TODO: implement
    return {};
}


vector<int> dfs(const Matrix& adj, int start) {
    // TODO: implement
    return {};
}

// Builds an undirected adjacency matrix from an edge list.
Matrix undirected(int n, const vector<std::pair<int, int>>& edges) {
    Matrix m(n, vector<int>(n, 0));
    for (auto [u, v] : edges) m[u][v] = m[v][u] = 1;
    return m;
}

int main() {
    //   0 --- 1 --- 4
    //   |     |     |
    //   3 --- 2     5 --- 6
    Matrix g = undirected(7, {{0, 1}, {0, 3}, {1, 2}, {2, 3}, {1, 4}, {4, 5}, {5, 6}});
    CHECK_EQ(bfs(g, 0), {0, 1, 3, 2, 4, 5, 6});
    CHECK_EQ(dfs(g, 0), {0, 1, 2, 3, 4, 5, 6});
    CHECK_EQ(bfs(g, 4), {4, 1, 5, 0, 2, 6, 3});
    CHECK_EQ(dfs(g, 4), {4, 1, 0, 3, 2, 5, 6});

    Matrix two = undirected(4, {{0, 1}, {2, 3}});  // not connected
    CHECK_EQ(bfs(two, 2), {2, 3});
    CHECK_EQ(dfs(two, 0), {0, 1});

    Matrix directed(3, vector<int>(3, 0));
    directed[0][1] = directed[1][2] = 1;
    CHECK_EQ(bfs(directed, 1), {1, 2});
    return TEST_SUMMARY();
}
