#include<bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define pb push_back
#define pq priority_queue
#define endl '\n'
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define read_file freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);

using namespace std;

const int N = 200000;

void solve(){
    int n; cin >> n;

    vector<vector<ull>> vec(N+1);
    vector<ull> decreases(N+1, 0);

    for (int i = 0; i <= N; i++) vec[i].pb(0);

    ull a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    ull c[n];
    for (int i = 0; i < n; i++) {
        cin >> c[i];
        ull prev = vec.at(c[i]).at(vec.at(c[i]).size()-1);
        vec[c[i]].pb(prev+a[i]);
    }

    ull tot = 0;
    int q; cin >> q;
    while(q--){
        ull type, col, x;
        cin >> type >> col >> x;
        if (type == 1){
            tot+=x;
            decreases[col]+=x;
        }
        else{
            ull l = 1; ull r = vec[col].size()-1;
            while (l < r){
                ull mid = (l+r+1)/2;
                if (vec[col][mid]+tot-decreases[col] <= x){
                    l = mid;
                }
                else{
                    r = mid-1;
                }
            }
            if (vec[col][l]+tot-decreases[col] <= x){
                cout << l << endl;
            }
            else{
                cout << l-1 << endl;
            }
        }
    }
}

int main() {
    fast;

    solve();
}