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
        int n,f,k ; cin >> n >> f >> k;
        int a[n];for(int i = 0 ; i < n ; i++)cin >> a[i];
        int fav = a[f-1];
        int bigger = 0, equal = 0;
        for(int i = 0; i < n ;i++) {
            if(a[i] > fav)bigger++;
            if(a[i] == fav && i!=f-1)equal++;
        }
        if(k > bigger && k <= bigger+equal) cout << "MAYBE" << endl;
        else if(k <= bigger)cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}
