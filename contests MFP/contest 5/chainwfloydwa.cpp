#include <bits/stdc++.h> 
using namespace std;

void floydWarshall(vector<vector<pair<int, int>>> &graph, vector<vector<int>> &dist) {
    int n = graph.size();
    // Set the distance of each vertex to itself as 0
    for (int i = 0; i < n; i++) {
        dist[i][i] = 0;
    }
    // Update the distance matrix with the direct edges
    for (int u = 0; u < n; u++) {
        for (auto i : graph[u]) {
            int v = i.first;
            int weight = i.second;
            dist[u][v] = weight;
        }
    }
    // Perform the Floyd-Warshall algorithm
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (dist[i][k] != INT_MAX && dist[k][j] != INT_MAX && dist[i][k] + dist[k][j] < dist[i][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }
}

int main() { 
    int n, m;
    cin >> n >> m;
    vector<vector<pair<int, int>>> graph(n + 1);
    vector<vector<int>> dist(n + 1, vector<int>(n + 1, INT_MAX)); // Modify to use a 2D vector for dist
    for (int i = 0; i < m; i++){
        int a, b, c;
        cin >> a >> b >> c;
        graph[a].push_back({b, c});
        graph[b].push_back({a, c});
    }
    floydWarshall(graph, dist); // Call the floydWarshall function
    int max = 0;
    for (int j = 0; j < n; j++){
        if (dist[0][j] != INT_MAX && dist[j][n-1] != INT_MAX && dist[0][j] + dist[j][n-1] > max){
            max = dist[0][j] + dist[j][n-1];
        }
    }
    
    cout << max << endl;
    return 0;
}