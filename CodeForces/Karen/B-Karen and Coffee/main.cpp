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
    int n,k,q;
    cin >> n >> k >> q;
    int l,r;
    int freq[200002];for(int i = 0; i < 200002 ; i++)freq[i]=0;
    for ( int i = 1; i <=n;i++) {
        cin >> l >> r;
        freq[l]++;
        freq[r+1]--;
    }
    int fre = 0;
    for( int i = 0; i < 200002; i++){
        fre += freq[i];
        freq[i] = fre;
    }
    for (int i = 0; i < 200002 ;i++) {
        if(freq[i] >= k)freq[i] = 1;
        else freq[i] = 0;
    }
    for( int i = 1 ; i < 200002 ; i++){
        freq[i] += freq[i-1];
    }
    while(q--){
        int a,b;
        cin >> a >> b;
        cout << (freq[b] - freq[a-1]) << endl;
    }

    return 0;
}