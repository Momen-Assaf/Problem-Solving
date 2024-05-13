#include<bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define endl '\n'
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

using namespace std;

string shiftRight(string &s) {
    char rm = s[s.length()-1];
    for(int i = s.length() - 1; i > 0; i--) {
        s[i] = s[i-1];
    }
    s[0] = rm;
    return s;
}

int main() {
    fast;
    int t;cin >> t;
    while (t--) {
        string s;cin >> s;
        string shifted = s;
        int yes = 0;
        for( int i = 0 ; i < s.length(); i++) {
            shifted = shiftRight(shifted);
            if(shifted != s) {
                cout << "YES" << endl << shifted << endl;
                yes++;
                break;
            }
        }
        if(!yes)cout << "NO" << endl;
    }
    return 0;
}
