#include<bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define endl '\n'
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

using namespace std;

void sol(){
    int n; ll x; cin >> n >> x;
    ll a[n];for(int i =0;i<n ;i++)cin >> a[i];
    ll l = 1,r = 2e9;
    while(l < r){
        ll m = (l+r+1)/2;
        ll ans = 0;
        for(int i = 0 ; i < n ; i++){
            ans +=max(m-a[i],0LL);
        }
        if(ans <= x)l=m;
        else r = m-1;
    }
    cout << l << endl;
}
int main(){
    fast;
    int t; cin >> t;
    while(t--){
        sol();
    }
    return 0;
}




