#include <bits/stdc++.h> 
using namespace std; 
int djikstra(long long int n, long long int m, long long int s, long long int t, vector<pair<long long int, long long int>> adj[], vector<long long int> &dist){
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, s});
    dist[s] = 0;
    while (!pq.empty()){
        int u = pq.top().second;
        pq.pop();
        for (auto x : adj[u]){
            int v = x.first;
            int w = x.second;
            if (dist[v] > dist[u] + w){
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
    return dist[t];
}

int main() { 
    long long int n, m;
    cin >> n >> m;
    vector<long long int> dist(n + 1, INT_MAX);
    vector<pair<long long int, long long int>> adj[n+1]; // assuming nodes are 1-indexed
    for(long long int i = 0; i < m; i++) {
        long long int a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back({b, c});
        // if the graph is undirected, add the following line:
        // adj[b].push_back({a, c});
    }
    
    for (long long int i = 1; i <= n; i++){
        cout << djikstra(n, m, 1, i, adj, dist) << " ";
    }

    cout << endl;
    return 0;
}

