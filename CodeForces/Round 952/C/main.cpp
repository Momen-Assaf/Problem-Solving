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
        int n;cin >> n;
        int a[n];for(int i = 0;i<n;i++)cin>>a[i];
        int pre[n];
        pre[0] = a[0];
        for(int i = 1 ; i < n ; i++) {
            pre[i] = pre[i-1] + a[i];
        }
        set<int> mp;
        int out = 0;
        for(int i = 0 ; i < n ; i++) {
            mp.insert(a[i]);
            if(pre[i]%2 == 0) {
                if(mp.count(pre[i]/2))out++;
            }
        }
        cout << out << endl;
    }
    return 0;
}
