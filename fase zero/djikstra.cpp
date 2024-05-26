#include <bits/stdc++.h>

using namespace std;

struct Edge{
    int u, v, w;
};

int main(){
    int n, m, k;
    
    cin >> n >> m >> k;

    vector<vector<pair<int, int>>> adj(n);

    for (int i = 0; i < m; i++){
        int u, v, w;
        
        cin >> u >> v >> w;
        u--;
        v--;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    vector<int> dist(n, 8760);
    dist[0] = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, 0});

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        for (auto edge : adj[u]) {
            int v = edge.first;
            int w = edge.second;

            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }

    sort(begin(dist), end(dist));
    
    cout << dist[k - 1] << endl;
}