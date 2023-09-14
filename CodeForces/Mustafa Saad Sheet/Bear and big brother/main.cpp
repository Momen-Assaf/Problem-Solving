#include<bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define pb push_back
#define pq priority_queue
#define endl '\n'
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

using namespace std;

int main(){
    fast;
    int a,b; cin >> a >> b;
    int ans = 0;
    for(int i = 0; i < 100 ; i ++){
        a *=3;
        b *=2;
        ans++;
        if(a > b) {
            cout << ans << endl;
            break;
        }
    }

    return 0;
}




