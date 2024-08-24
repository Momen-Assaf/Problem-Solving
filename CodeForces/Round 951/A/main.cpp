#include<bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define endl '\n'
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

using namespace std;

int main() {
    fast;
    int t;cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];for(int i=0; i<n; i++)cin >> a[i];
        int k = INT_MAX;
        for (int i = 0; i < n-1; i++) {
            k = min(k, max(a[i],a[i+1]));
        }
        cout << k-1 << endl;
    }
    return 0;
}
