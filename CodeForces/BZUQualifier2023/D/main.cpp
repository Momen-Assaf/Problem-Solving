#include<bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define pb push_back
#define pq priority_queue
#define endl '\n'
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define read_file freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);

using namespace std;

const int N = 100000;
vector<vector<ll>> facts(N+1);

void sieve(){
    for (int i = 2; i <= N; i++){
        if (facts[i].size() != 0) continue;
        for (int j = i; j<= N; j+=i){
            facts[j].pb(i);
        }
    }
}

void solve(){
    ll n, m;
    cin >> n >> m;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int counter = 1;
    vector<bool> divisible(N+1, false);
    for (int i = 0; i < n; i++) {
        for (auto factor : facts[arr[i]]) {
            divisible[factor] = true;
        }
    }

    for (int i = 2; i <= m; i++){
        bool ok = true;
        for (auto factor : facts[i]){
            if (divisible[factor]){
                ok = false;
                break;
            }
        }
        if (ok){
            counter++;
        }
    }
    cout << counter << endl;
}


int main() {
    fast;

    sieve();
    int t; cin >> t;
    while (t--){
        solve();
    }
}