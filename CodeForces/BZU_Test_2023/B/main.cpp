#include<bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define pb push_back
#define pq priority_queue
#define endl '\n'
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

using namespace std;

int main(){
    fast;
    ll n; cin >> n;
    ll arr[n];
    ll maxneg = 0;
    int t = 0;
    for( ll i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] < 0)t=1;
        if(arr[i] < maxneg)maxneg = arr[i];
    }
    ll ans = 0;
    ll min;
    if( t == 1) ans = abs(maxneg);
    for(ll i = 0; i < n; i++){
        arr[i]+=abs(maxneg);
        min = arr[0];
    }
    for(int i = 1;i < n;i++){
        arr[0] = min;
        if(arr[i - 1] < arr[i]){
            arr[i] -= (arr[i] - arr[i-1]);
            ans+=(arr[i] - arr[i-1]);
            arr[i-1] = 0;
        }
    }
    cout << ans << endl;
    return 0;
}




