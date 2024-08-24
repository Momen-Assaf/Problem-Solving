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
        int n,m; cin >> n >> m;
        string a; cin >> a;
        int output = 0;
        int p[7];
        for(int i = 0 ; i < 7;i++)p[i] = 0;
        for(int i = 0 ; i < n ; i++) {
            switch (a[i]) {
                case 'A':
                    p[0]++;
                break;
                case 'B':
                    p[1]++;
                break;
                case 'C':
                    p[2]++;
                break;
                case 'D':
                    p[3]++;
                break;
                case 'E':
                    p[4]++;
                break;
                case 'F':
                    p[5]++;
                break;
                case 'G':
                    p[6]++;
                break;
            }
        }
        for( int i = 0 ; i < 7 ; i++) {
            if(p[i] < m)output+=m-p[i];
        }
        cout << output << endl;

    }
    return 0;
}
