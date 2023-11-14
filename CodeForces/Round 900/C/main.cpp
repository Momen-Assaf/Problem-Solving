#include<bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define ui unsigned int
#define endl '\n'
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

using namespace std;

void solve(){
    int n,k;
    ll x;
    cin >> n >> k;
    cin >> x;

    if(x >= 1LL * k * (k+1)/2 && x<= 1LL * k * (n+n-k+1)/2){
        cout << "Yes" << endl;
    }
    else cout << "NO" << endl;

}
int main(){
    fast;
    int t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
