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
        int n;cin >> n;
        int a[n]; for(int i = 0 ; i < n ;i++) cin >> a[i];//original arr
        pair<int,int>b[n]; for(int i = 0 ; i < n ;i++) {
            cin >> b[i].first;b[i].second = 0;//found arr
        }
        int m; cin >> m;//number of modifications
        int d[m];for(int i = 0 ; i < m ;i++) cin >> d[i];//value of modification
        int numOfModifications = 0;
        for( int i = 0 ; i < n; i++) {
            for( int j = 0 ; j < m; j++) {
                if(b[i].first == d[j]) {
                    b[i].second++;numOfModifications++;
                }
            }
        }
        bool naa = false;
        for(int i = 0 ; i < n; i++) {
            if(b[i].second == 0) {
                cout << "NO" << endl;naa = true;
                break;
            }
        }
        if(!naa) {
            if (numOfModifications > m)cout << "NO" << endl;
            else cout << "YES" << endl;
        }
    }
    return 0;
}
