#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Structure to represent an edge
struct Edge {
    int src, dest, weight;
};

// Structure to represent a disjoint set
struct DisjointSet {
    vector<int> parent, rank;
    
    DisjointSet(int n) {
        parent.resize(n);
        rank.resize(n, 0);
        
        // Initialize each element as a separate set
        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }
    }
    
    // Find the parent of a set
    int find(int x) {
        if (parent[x] != x) {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }
    
    // Union of two sets
    void unionSets(int x, int y) {
        int xRoot = find(x);
        int yRoot = find(y);
        
        if (rank[xRoot] < rank[yRoot]) {
            parent[xRoot] = yRoot;
        } else if (rank[xRoot] > rank[yRoot]) {
            parent[yRoot] = xRoot;
        } else {
            parent[yRoot] = xRoot;
            rank[xRoot]++;
        }
    }
};

// Function to compare edges by their weight
bool compareEdges(const Edge& a, const Edge& b) {
    return a.weight < b.weight;
}

// Function to perform Kruskal's algorithm
vector<Edge> kruskal(vector<Edge>& edges, int V) {
    // Sort the edges in non-decreasing order of their weight
    sort(edges.begin(), edges.end(), compareEdges);
    
    vector<Edge> result;
    DisjointSet ds(V);
    
    for (const auto& edge : edges) {
        int src = edge.src;
        int dest = edge.dest;
        
        int srcRoot = ds.find(src);
        int destRoot = ds.find(dest);
        
        // If including this edge does not form a cycle, add it to the result
        if (srcRoot != destRoot) {
            result.push_back(edge);
            ds.unionSets(srcRoot, destRoot);
        }
    }
    
    return result;
}

int main() {
    int V, E;
    cout << "Enter the number of vertices: ";
    cin >> V;
    cout << "Enter the number of edges: ";
    cin >> E;
    
    vector<Edge> edges(E);
    
    cout << "Enter the source, destination, and weight of each edge:\n";
    for (int i = 0; i < E; i++) {
        cin >> edges[i].src >> edges[i].dest >> edges[i].weight;
    }
    
    vector<Edge> minimumSpanningTree = kruskal(edges, V);
    
    cout << "Minimum Spanning Tree:\n";
    for (const auto& edge : minimumSpanningTree) {
        cout << edge.src << " -- " << edge.dest << " : " << edge.weight << "\n";
    }
    
    return 0;
}