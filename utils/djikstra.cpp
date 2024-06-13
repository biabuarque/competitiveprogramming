#include <bits/stdc++.h> 

using namespace std;

vector<int> dijkstra(vector<vector<pair<int, int>>>& graph, int start) {
    int n = graph.size();
    vector<int> dist(n, INT_MAX);
    vector<bool> visited(n, false);
    dist[start] = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, start});

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        if (visited[u]) {
            continue;
        }

        visited[u] = true;

        for (auto& neighbor : graph[u]) {
            int v = neighbor.first;
            int weight = neighbor.second;

            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});
            }
        }
    }

    return dist;
}

int main() {
    // Example usage
    int n = 5; // Number of vertices
    vector<vector<pair<int, int>>> graph(n);

    // Add edges to the graph
    graph[0].push_back({1, 10});
    graph[0].push_back({4, 5});
    graph[1].push_back({2, 1});
    graph[1].push_back({4, 2});
    graph[2].push_back({3, 4});
    graph[3].push_back({2, 6});
    graph[3].push_back({0, 7});
    graph[4].push_back({1, 3});
    graph[4].push_back({2, 9});
    graph[4].push_back({3, 2});

    int start = 0; // Starting vertex

    vector<int> shortestDistances = dijkstra(graph, start);

    // Print the shortest distances from the starting vertex
    for (int i = 0; i < n; i++) {
        cout << "Shortest distance from vertex " << start << " to vertex " << i << ": " << shortestDistances[i] << endl;
    }

    return 0;
}