#include <bits/stdc++.h> 
using namespace std; 

void dijkstra(vector<vector<pair<int, long long int>>>& graph, vector<long long int>& dist, int start) {
    int n = graph.size();
    dist[start] = 0;
    priority_queue<pair<long long int, int>, vector<pair<long long int, int>>, greater<pair<long long int, int>>> pq;
    pq.push({0, start});
    
    while (!pq.empty()) {
        int u = pq.top().second;
        long long int d = pq.top().first;
        pq.pop();
        
        if (d > dist[u]) {
            continue;
        }
        
        for (auto edge : graph[u]) {
            int v = edge.first;
            long long int w = edge.second;
            
            if (d + w < dist[v]) {
                dist[v] = d + w;
                pq.push({dist[v], v});
            }
        }
    }
}

int main() { 
    int n, m;
    cin >> n >> m;
    vector<vector<pair<int, long long int>>> graph(n + 1);
    vector<long long int> dist(n, LONG_LONG_MAX);
    for (int i = 0; i < m; i++){
        int a, b;
        long long int c;
        cin >> a >> b >> c;
        a--; b--;
        graph[a].push_back({b, c});
    }
    dijkstra(graph, dist, 0);
    for (int i = 0; i < n; i++){
        cout << dist[i] << " ";
    }
    cout << endl;
    return 0;
}