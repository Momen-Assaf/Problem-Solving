#include<bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define endl '\n'
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

using namespace std;


int main(){
    fast;
    int t;cin >> t;
    while(t--){
        int n,k;cin >> n >> k;
        int a[n];for(int i = 0 ; i < n ;i++)cin >> a[i];
        int x = 0;
        for(int i = 0 ; i < n;i++){
            if(a[i] == k){
                cout << "YES" << endl;
                x++;
                break;
            }
        }
        if( x == 0) cout << "NO" << endl;

    }
    return 0;
}




