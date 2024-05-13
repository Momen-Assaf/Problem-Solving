#include<bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define endl '\n'
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

using namespace std;


int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        if (x > y) cout << y << ' ' << x << endl;
        else cout << x << ' ' << y << endl;
    }
    return 0;
}
