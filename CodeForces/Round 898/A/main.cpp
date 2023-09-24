#include<bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define endl '\n'
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

using namespace std;

int main(){
    fast;
    int t;cin >> t;
    while(t--) {
        string in;cin >> in;
        if (in[0] == 'b' && in[1] == 'a') {
            in[0] = 'a';in[1] = 'b';
        }
        else if(in[0] == 'c' && in[2] =='a'){
            in[0] = 'a'; in[2] = 'c';
        }
        else if(in[1] == 'c' && in[2] == 'b'){
            in[1] = 'b';in[2] = 'c';
        }
        if (in == "abc") {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}




