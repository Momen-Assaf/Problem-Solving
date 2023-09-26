#include<bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define endl '\n'
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

using namespace std;

int main(){
    ll b;cin >> b;
//    ll ans = 0;
//    for( ll i = 1 ;i < b; i++){
//        if(b%i == 0)ans++;
//    }
//    if(ans%2==0)cout << "no" << endl;
//    else cout << "yes" << endl;
    ll s = (ll) sqrt(b);
    cout << (s * s == b ? "yes" : "no") << endl;

    return 0;
}




