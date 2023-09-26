#include<bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define endl '\n'
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

using namespace std;

int main(){
    fast;
    int t;cin >> t;
    while(t--) {
        int n;cin >> n;
        ll a[n];for( int i = 0;i < n;i++)cin >> a[i];

        ll m = 1;
        for( int i = 0 ; i < n ; i++){
            if(a[i] == m)m++;
            m++;
        }
        cout << m - 1 << endl;
    }
    return 0;
}




