#include<bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define pb push_back
#define pq priority_queue
#define endl '\n'
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define read_file freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);


using namespace std;


void sol_dp(ll n){
    ll f[n+1];
    f[0] = 1;
    f[1] = 0;

    for (int i = 2; i <= n;i++){
        f[i] = 2* f[i-2];
    }
    cout << f[n];
}

int main(){
    fast;
    ll n;
    cin >> n;
    sol_dp(n);
}