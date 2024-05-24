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
        string s; cin >> s;
        int counter = 1;
        for(int i = 0; i < s.length(); i++) {
            for( int j = s.length()-1; j >= i; j--) {
                if(s[i] == '1' && s[j] == '0') {
                    swap(s[j],s[i]);
                    counter++;
                    break;

                }
            }
        }
        cout << counter << endl;
    }
    return 0;
}
