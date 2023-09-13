#include<bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define pb push_back
#define pq priority_queue
#define endl '\n'
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

using namespace std;
int n,m;

int main() {
    fast;
    cin >> n >> m;
    int g[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> g[i][j];
        }
    }
    int arr[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr[i][j] = 0;
        }
    }
    int b = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (j + 1 < m) {
                if (arr[i][j] == g[i][j] && arr[i][j + 1] == g[i][j + 1])continue;
                if ((arr[i][j] != g[i][j]) && (arr[i][j + 1] != g[i][j + 1])) {
                    for (int x = 0; x < m; x++) {
                        arr[i][x]++;
                    }
                    b++;
                } else if (arr[i][j] != g[i][j] && arr[i + 1][j] != g[i + 1][j]) {
                    for (int x = 0; x < n; x++) {
                        arr[x][j]++;
                    }
                    b++;
                }
            } else {
                if (arr[i][j] == g[i][j])continue;
                else if (arr[i][j] != g[i][j - 1]) {
                    for (int x = 0; x < n; x++) {
                        arr[x][j]++;
                    }
                    b++;
                }
            }
        }
        if (b == 0) cout << -1 << endl;
        else cout << b << endl;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                arr[i][j] = 0;
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (j + 1 < m) {
                    if (arr[i][j] == g[i][j] && arr[i][j + 1] == g[i][j + 1])continue;
                    if ((arr[i][j] != g[i][j]) && (arr[i][j + 1] != g[i][j + 1])) {
                        for (int x = 0; x < m; x++) {
                            arr[i][x]++;
                        }
                        cout << "row" << ' ' << i + 1 << endl;
                    } else if (arr[i][j] != g[i][j] && arr[i + 1][j] != g[i + 1][j]) {
                        for (int x = 0; x < n; x++) {
                            arr[x][j]++;
                        }
                        cout << "col" << ' ' << j + 1 << endl;
                    }
                } else {
                    if (arr[i][j] == g[i][j])continue;
                    else if (arr[i][j] != g[i][j - 1]) {
                        for (int x = 0; x < n; x++) {
                            arr[x][j]++;
                        }
                        cout << "col" << ' ' << j + 1 << endl;
                    }
                }
            }
        }

//    for( int i = 0; i < n;i++){
//        for(int j = 0; j < m ;j++){
//            cout << arr[i][j] << ' ';
//        }
//        cout << endl;
//    }


        return 0;
    }
}