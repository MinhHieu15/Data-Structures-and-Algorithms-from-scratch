// 16 - Greedy: minimum cost spanning tree (Prim and Kruskal)
// Course: section 26, videos 005-009
//
// The graph is undirected and connected, vertices 0..n-1.
// prim:    cost matrix, cost[u][v] == 0 means "no edge". Return the total MST cost.
// kruskal: edge list. Sort edges by cost and use a disjoint set to skip cycles.
// Both must return the same total for the same graph.
#include <algorithm>
#include <climits>
#include <vector>

#include "../../include/test.hpp"

using std::vector;

struct Edge {
    int u, v, cost;
};

long long prim(const vector<vector<int>>& cost) {
    // TODO: implement
    return 0;
}


long long kruskal(int n, vector<Edge> edges) {
    // TODO: implement
    return 0;
}

int main() {
    // 7 vertices, 9 edges
    vector<Edge> edges{{0, 1, 25}, {0, 5, 5},  {1, 2, 12}, {1, 6, 10}, {2, 3, 8},
                       {3, 4, 16}, {3, 6, 14}, {4, 5, 20}, {4, 6, 18}};
    int n = 7;
    vector<vector<int>> cost(n, vector<int>(n, 0));
    for (auto e : edges) cost[e.u][e.v] = cost[e.v][e.u] = e.cost;

    CHECK_EQ(prim(cost), 71LL);
    CHECK_EQ(kruskal(n, edges), 71LL);

    vector<Edge> small{{0, 1, 4}, {0, 2, 1}, {1, 2, 2}, {1, 3, 5}, {2, 3, 8}};
    vector<vector<int>> c2(4, vector<int>(4, 0));
    for (auto e : small) c2[e.u][e.v] = c2[e.v][e.u] = e.cost;
    CHECK_EQ(prim(c2), 8LL);
    CHECK_EQ(kruskal(4, small), 8LL);
    return TEST_SUMMARY();
}
