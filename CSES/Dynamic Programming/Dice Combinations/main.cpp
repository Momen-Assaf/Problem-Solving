#include<bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define pb push_back
#define pq priority_queue
#define endl '\n'
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define read_file freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);

using namespace std;

ll n;

void sol(){
    cin >> n;
    ll f[n+1];
    f[1] = 1;
    for(ll i = 2; i <=n; i++){
        if (i <= 6)f[i] = 2 * f[i-1];
        else f[i] = 2 * f[i-1] - ;
    }
    cout << f[n] << endl;
}
int main(){
    fast;
    sol();
}