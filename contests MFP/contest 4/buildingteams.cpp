#include <bits/stdc++.h> 
using namespace std; 
  
int main() {
    int n, m;
    cin >> n >> m;
   
    vector<vector<int>> adj(n); // Define the adjacency list 'adj'
    
    // Read the graph
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u - 1].push_back(v - 1);
        adj[v - 1].push_back(u - 1);
    }

    vector<int> color(n, -1); // Initialize color array with -1
    bool isBipartite = true;

    // Perform BFS traversal
    for (int i = 0; i < n; i++) {
        if (color[i] == -1) {
            queue<int> q;
            q.push(i);
            color[i] = 0; // Assign color 0 to the starting vertex

            while (!q.empty()) {
                int u = q.front();
                q.pop();

                for (int v : adj[u]) { // Assuming you have an adjacency list 'adj' representing the graph
                    if (color[v] == -1) {
                        color[v] = 1 - color[u]; // Assign opposite color to the adjacent vertex
                        q.push(v);
                    } else if (color[v] == color[u]) {
                        isBipartite = false; // If adjacent vertices have the same color, the graph is not bipartite
                        break;
                    }
                }
            }
        }
    }

    if (isBipartite) {
        for (int i; i < n; i++){
            cout << color[i] + 1 << " ";
        }
        cout << endl;
    } else {
        cout << "IMPOSSIBLE" << endl;
    }
    return 0;
}