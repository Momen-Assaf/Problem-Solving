#include<bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define endl '\n'
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

using namespace std;


int main() {
    fast;
    int t;cin >> t;
    while (t--) {
        int p1,p2,p3; cin >> p1 >> p2 >> p3;
        if (p1 == p2 && p2 == p3 ) {
            if(p1%2 != 0)cout << -1 << endl;
            else cout << p3 + p3/2 << endl;
        }
        else {
            if((p3-p2) %2 == 1)cout << p2+p1-1 << endl;
            else if (p3 - (p2+p1) ! =)
            else cout << p2+p1 << endl;
        }
    }
    return 0;
}
