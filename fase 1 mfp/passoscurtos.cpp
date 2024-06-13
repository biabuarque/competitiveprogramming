#include <bits/stdc++.h> 
using namespace std; 

vector<vector<long long int>> floydWarshall(vector<vector<long long int>> graph, int n) {

    vector<vector<long long int>> dist = graph;

    // Update the distance matrix by considering all vertices as intermediate nodes
    for (int k = 0; k < n; ++k) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                // If vertex k is on the shortest path from i to j, update the distance
                if (dist[i][k] != INT_MAX && dist[k][j] != INT_MAX && dist[i][k] + dist[k][j] < dist[i][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }

    return dist;
}

long long int euclid(long long int xa, long long int ya, long long int xb, long long int yb){
    return ((xa - xb)*(xa - xb)) + ((ya - yb)*(ya - yb));
}

int main() { 
    int n, q;
    long long int d;
    cin >> n >> q >> d;
    vector<pair<long long int, long long int>> points(n);
    for (int i = 0; i < n; i++){
        cin >> points[i].first >> points[i].second;
    }
    vector<vector<long long int>> graph(n, vector<long long int> (n, INT_MAX));
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            long long int dis = euclid(points[i].first, points[i].second, points[j].first, points[j].second);
            if (dis <= d * d){
                graph[i][j]= dis;
                graph[j][i]= dis;
            }
            else{
                graph[i][j]= INT_MAX;
                graph[j][i]= INT_MAX;
            }
        }
    }
    vector<vector<long long int>> dist = floydWarshall(graph, n);
    for (int i = 0; i < q; i++){
        int a, b;
        cin >> a >> b;
        a--; b--;
        if (dist[a][b] != INT_MAX){
            cout << "S" << endl;
        } else {
            cout << "N" << endl;
        }
    }
    return 0;
    }