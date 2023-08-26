#include<bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define pb push_back
#define pq priority_queue
#define endl '\n'
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define read_file freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);

using namespace std;

const int N = 30;
int rows, cols; ll k;
ll mat[N][N];

set<pair<pair<int, int>, ll>> s1;


bool valid(int x, int y){
    return (x >= 0 && x < cols && y >= 0 && y < rows);
}

bool rec(int x, int y, ll sum, int moves){
    if (!valid(x, y) || sum > k || s1.count({{x, y}, sum+mat[y][x]})) return false;
    s1.insert({{x, y}, sum+mat[y][x]});

    if (x == cols-1 && y == rows-1){
        if (sum+mat[y][x] == k) return true;
        return false;
    }

    bool a = rec(x+1, y, sum+mat[y][x], moves+1);
    bool b = rec(x, y+1, sum+mat[y][x], moves+1);
    return (a||b);
}


void solve() {
    cin >> rows >> cols >> k;
    for (int y = 0; y < rows; y++){
        for (int x = 0; x < cols; x++){
            cin >> mat[y][x];
        }
    }

    bool ans = rec(0, 0, 0, 0);
    if (ans){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

int main() {
    fast;

    solve();
}