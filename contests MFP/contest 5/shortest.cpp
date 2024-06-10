#include <bits/stdc++.h> 
using namespace std; 

void dijkstra(vector<vector<pair<int, long long int>>> &graph, vector<int> &dist, int start){
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, start});
    dist[start] = 0;
    while (!pq.empty()){
        int u = pq.top().second;
        pq.pop();
        for (auto i : graph[u]){
            int v = i.first;
            long long int weight = i.second;
            if (dist[v] > dist[u] + weight){
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});
            }
        }
    }
}

int main() { 
    int n, m;
    cin >> n >> m;
    vector<vector<pair<int, int>>> graph(n + 1);
    vector<int> dist(n, INT_MAX);
    for (int i = 0; i < m; i++){
        int a, b, c;
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