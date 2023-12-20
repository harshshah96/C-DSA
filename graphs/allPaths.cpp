#include<bits/stdc++.h>
#include <iostream>
using namespace std;

vector<list<int>> graph;
unordered_set<int> visited;
vector<vector<int>> result;
int v; // no of vertices

// Function to add an edge between two vertices
void add_edge(int src, int dest, bool bi_dir = true) {
    graph[src].push_back(dest);
    if (bi_dir) {
        graph[dest].push_back(src);
    }
}

// Depth-First Search (DFS) function to find paths between vertices
void dfs(int curr, int end, vector<int>& path) {
    if (curr == end) {
        path.push_back(curr);
        result.push_back(path);
        path.pop_back();
        return;
    }
    visited.insert(curr); // Mark the current vertex as visited
    path.push_back(curr);
    for (auto neighbor : graph[curr]) {
        if (!visited.count(neighbor)) {
            dfs(neighbor, end, path);
        }
    }
    path.pop_back();
    visited.erase(curr); // Unmark the current vertex
    return;
}

// Function to find all paths between source and destination
void allPath(int src, int dest) {
    vector<int> v;
    dfs(src, dest, v);
}

int main() {
    cin >> v; // Read the number of vertices
    graph.resize(v, list<int> ());
    int e;
    cin >> e; // Read the number of edges
    visited.clear();
    while (e--) {
        int s, d;
        cin >> s >> d;
        add_edge(s, d); // Add edges to the graph
    }
    int x, y;
    cin >> x >> y; // Read the source and destination vertices
    allPath(x, y); // Find all paths between x and y
    cout << "No. of Paths: " << result.size() << endl; // Print the number of paths
    cout << "PATHS:" << endl;
    cout << endl;
    for (auto path : result) {
        for (auto el : path) {
            if (el == y) cout << el;
            else cout << el << "-> ";
        }
        cout << endl; // Print each path
    }
    return 0;
}
