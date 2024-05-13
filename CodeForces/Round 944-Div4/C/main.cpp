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
        int a,b,c,d; cin >> a >> b >> c >> d;
        int temp;
        if (a > b) {
            temp = a;a = b;b = temp;
        }
        if(c > d) {
            temp = c;c = d;d = temp;
        }
        if( (a < c && b < c) || (c < a && d < a))cout << "NO" << endl;
        else if( (a < c && b > d) || (c < a && d > b))cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}
