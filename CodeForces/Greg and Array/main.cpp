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
    int n,k,m; cin >> n >> m >> k;
    int a[n]; for(int i=0;i<n;i++)cin>>a[i];
    ll mark[n+1]; for(int i = 0; i<=n; i++)mark[i] = 0;
    ll freq[m+1]; for(int i = 0; i<=m; i++)freq[i] = 0;
    int l[m],r[m],d[m];
    int x[k], y[k];
    for(int i = 0; i < m; i++){
        cin >> l[i] >> r[i] >> d[i];
        l[i]--;r[i]--;
    }
    for(int i = 0; i < k; i++) {
        cin >> x[i] >> y[i];
        x[i]--;y[i]--;
    }
    for( int i = 0; i < k ; i++){
        freq[x[i]]++;
        freq[y[i]+1]--;
    }
    ll fr = 0;
    for( int i = 0; i < m ; i++){
        fr+=freq[i];
        mark[l[i]]+=d[i]*fr;
        mark[r[i]+1]-=d[i]*fr;
    }
    ll curr=0;
    for( int i = 0; i < n; i++){
        curr+=mark[i];
        cout << a[i]+curr << ' ';
    }
    cout << endl;

    return 0;
}