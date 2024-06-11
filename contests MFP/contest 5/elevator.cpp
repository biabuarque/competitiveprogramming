#include <bits/stdc++.h> 
using namespace std; 

int bfs(long long int f, long long int s, long long int g, long long int u, long long int d) {
    queue<long long int> q;
    vector<bool> visited(f + 1, false);
    vector<long long int> dist(f + 1, -1);

    q.push(s);
    visited[s] = true;
    dist[s] = 0;

    while (!q.empty()) {
        long long int curr = q.front();
        q.pop();

        if (curr == g) {
            return dist[curr];
        }

        long long int next_up = curr + u;
        long long int next_down = curr - d;

        if (next_up <= f && !visited[next_up]) {
            q.push(next_up);
            visited[next_up] = true;
            dist[next_up] = dist[curr] + 1;
        }

        if (next_down >= 1 && !visited[next_down]) {
            q.push(next_down);
            visited[next_down] = true;
            dist[next_down] = dist[curr] + 1;
        }
    }

    return -1; // If it's not possible to reach the target floor
}

int main() { 
    long long int f, s, g, u, d;
    cin >> f >> s >> g >> u >> d;

    int min_moves = bfs(f, s, g, u, d);
    if (min_moves == -1) {
        cout << "use the stairs" << endl;
    } else {
        cout << min_moves << endl;
    }

    return 0;
}
