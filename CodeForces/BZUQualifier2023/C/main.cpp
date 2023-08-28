#include<bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define pb push_back
#define pq priority_queue
#define endl '\n'
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define read_file freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);

using namespace std;

void solve(){
    int n; cin >> n;

    int arr[n]; for (int i = 0; i < n; i++) cin >> arr[i];
    bool visited[n]; for (int i = 0; i < n; i++) visited[i] = false;

    int ans = 0;
    int mask = (1<<30);
    for (int i = 0; i <= 30; i++){
        int temp = 0;
        for (int j = 0; j < n; j++){
            if (visited[j]) continue;
            if (arr[j]&mask){
                visited[j] = true;
                temp++;
            }
        }
        mask = (mask>>1);
        ans = max(ans, temp);
    }
    cout << ans << endl;
}

int main() {
    fast;

    int t; cin >> t;
    while (t--){
        solve();
    }
}