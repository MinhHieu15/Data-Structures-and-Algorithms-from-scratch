// 16 - Greedy: Dijkstra single source shortest path
// Course: section 26, videos 010-011
//
// Directed graph as a cost matrix: cost[u][v] == 0 means "no edge", weights are positive.
// Return dist[v] = shortest distance from src to v, or INF when v cannot be reached.
// The O(n^2) version from the course (pick the closest unvisited vertex each round)
// is perfect; a priority queue version is fine too.
#include <climits>
#include <vector>

#include "../../include/test.hpp"

using std::vector;
constexpr long long INF = LLONG_MAX;

vector<long long> dijkstra(const vector<vector<int>>& cost, int src) {
    // TODO: implement
    return vector<long long>(cost.size(), INF);
}

int main() {
    // course example (vertices 1..6 renamed to 0..5)
    vector<vector<int>> g(6, vector<int>(6, 0));
    g[0][1] = 2;
    g[0][2] = 4;
    g[1][2] = 1;
    g[1][3] = 7;
    g[2][4] = 3;
    g[3][5] = 1;
    g[4][3] = 2;
    g[4][5] = 5;
    CHECK_EQ(dijkstra(g, 0), {0, 2, 3, 8, 6, 9});
    CHECK_EQ(dijkstra(g, 4), {INF, INF, INF, 2, 0, 3});

    vector<vector<int>> h(3, vector<int>(3, 0));
    h[0][1] = 10;
    h[0][2] = 1;
    h[2][1] = 2;
    CHECK_EQ(dijkstra(h, 0), {0, 3, 1});
    return TEST_SUMMARY();
}
