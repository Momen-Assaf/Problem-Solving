#include<bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define endl '\n'
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

using namespace std;

int main(){
    fast;
    int t;cin >> t;
    while(t--){
        int k,n; cin >> n >> k;
        string str;
        cin >> str;
        int ans = 0;
        for( int i = 0 ; i < n ;i++){
            if(str[i] == 'W')continue;
            else {
                ans++;
                i +=k-1;
                if( i >=n)break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}




