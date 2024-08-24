#include<bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define endl '\n'
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

using namespace std;

int main() {
    fast;
    int t;cin >> t;
    while(t--) {
        int n, q; cin >> n >> q;
        int m = q;
        int a[n]; for( int i = 0; i < n ; i++)cin >> a[i];
        int sum[n];for(int i = 0; i < q; i++)sum[i] = 0;
        while(m--) {
        int j,b,k; cin >> j >> b >>k;
            for( int i = a[j]; i < j+b*k; i+=b*(i+1)) {
                sum[m]+= sum[i];
            }
        }
        for( int i = 0; i < q; i++) {
            cout << sum[i] << ' ';
        }
    }
    return 0;
}
