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
        string a,b; cin >> a >> b;
        swap(a[0],b[0]);
        cout << a << ' ' << b << endl;
    }
    return 0;
}
