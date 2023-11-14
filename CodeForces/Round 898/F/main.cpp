#include<bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define endl '\n'
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

using namespace std;

void solve(){
    int n,k;cin >> n >> k;
    int a[n+1];for(int i = 1 ; i <= n ; i++)cin >> a[i];
    int h[n+1];for(int i = 1 ; i <= n; i++)cin >> h[i];

    int fsum[n+1];
    fsum [0] = 0;
    for(int i = 1 ; i <= n ; i++)fsum[i] = fsum[i-1] + a[i];
    int mx = 0;
    for( int i = 1 ; i <= n ; i++) {
        if(h[i]%h[i+1] != 0)continue;
        int l = i, r = n;
        while (l < r) {
            int m = (l + r + 1) / 2;
            if (fsum[r] - fsum[l] <= k)l = m;
            else r = m - 1;
        }
        mx = max(mx,l);
    }
    cout << mx << endl;
}
int main(){
    fast;
    int t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}




