#include<bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define endl '\n'
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

using namespace std;

void solve(){
    int n, x; cin>>n>>x;
    int a[n]; for(int i=0; i<n; i++) cin>>a[i];

    unordered_set<int> s1;
    int ans=1;
    for(int i=0; i<n; i++) {
        if(a[i]>x || !(x%a[i]==0)) continue;
        if(s1.count(x/a[i])) {
            ans++; s1.clear();
            s1.insert(a[i]);
            continue;
        }
        unordered_set<int> s2;
        for(auto val:s1) {
            if(x%(val*a[i])==0) s2.insert(val*a[i]);
        }
        s1.insert(a[i]);
        for(auto val:s2) s1.insert(val);
    }
    cout<<ans<<endl;
}

int main() {
    fast;
    int t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
