#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define el '\n'

int main() {
    int n = 6;

    vector<vector<int>> adj(n);
    vector<int> dist(n, -1);
    vector<int> par(n, -1);

    // Graph
    adj[0] = {1, 2, 4};
    adj[1] = {3, 4};
    adj[2] = {5};

    int src = 0, dest = 5;

    queue<int> q;
    q.push(src);
    dist[src] = 0;

    while (!q.empty()) {

        int node = q.front();
        q.pop();

        for (int neighbor : adj[node]) {

            if (dist[neighbor] == -1) {

                dist[neighbor] = dist[node] + 1;
                par[neighbor] = node;

                q.push(neighbor);
            }
        }
    }

    // Check if destination is reachable
    if (dist[dest] == -1) {
        cout << "No Path" << el;
        return 0;
    }

    // Shortest distance
    cout << "Shortest Distance = " << dist[dest] << el;

    // Reconstruct path
    vector<int> path;

    for (int v = dest; v != -1; v = par[v]) {
        path.push_back(v);
    }

    reverse(path.begin(), path.end());

    cout << "Path: ";
    for (int x : path) {
        cout << x << " ";
    }

    return 0;
}