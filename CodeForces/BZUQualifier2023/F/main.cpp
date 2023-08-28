#include <iostream>
#include <vector>
#include <map>
using namespace std;

const int MAXN = 2e5 + 5;

vector<int> color(MAXN);
vector<vector<int>> adj(MAXN);
map<int, int> freq[MAXN]; // freq[u][c] represents frequency of color c in subtree rooted at u

void dfs(int u, int parent) {
    freq[u][color[u]] = 1;

    for (int v : adj[u]) {
        if (v != parent) {
            dfs(v, u);
            for (auto [c, cnt] : freq[v]) {
                freq[u][c] += cnt;
            }
        }
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        for (int i = 1; i <= n; ++i) {
            cin >> color[i];
            freq[i].clear();
        }

        for (int i = 1; i <= n - 1; ++i) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        dfs(1, 0); // Start DFS from root node

        bool possible = true;
        for (int u = 1; u <= n; ++u) {
            if (freq[u] != freq[1]) {
                possible = false;
                break;
            }
        }

        if (possible) {
            cout << "0\n";
        } else {
            cout << "-1\n";
        }

        // Clear data for the next test case
        for (int i = 1; i <= n; ++i) {
            adj[i].clear();
        }
    }

    return 0;
}
