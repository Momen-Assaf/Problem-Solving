#include<bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define endl '\n'
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

using namespace std;

//screen fits 2y's and 7x's
int main() {
    fast;
    int t;cin >> t;
    while(t--){
        int x,y; cin >> x >> y;
        int output = 0;
        if( y == 0 && x == 0) {
            cout << 0 << endl;
            continue;
        }
        while(y >= 0 || x >=0){
            if( y >= 2) {
                output++;
                y-=2;x-=7;
            }
            else if( y == 1) {
                output++;
                y-=1;x-=11;
            }
            else if (x > 0 && y<=0) {
                output++;
                x-=15;y-=1;
            }
            else break;
        }
        cout<< output << endl;
    }
    return 0;
}
