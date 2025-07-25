#include <iostream>
#include <array>
using namespace std;

// adjacency matrix representation of a graph



int main() {
    int n, m;
    cin >> n >> m; // n = number of vertices, m = number of edges
    int adj[n+1][n+1];

    for (int i = 0; i <= n; i++) {
        int u, v;
        cin >> u >> v; // input the edge
        adj[u][v] = 1; // mark the edge in the adjacency matrix
        adj[v][u] = 1; // for undirected graph, mark the reverse edge as well
    }
    return 0;
    
}