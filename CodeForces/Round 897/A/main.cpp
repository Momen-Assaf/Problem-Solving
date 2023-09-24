#include<bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define endl '\n'
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

using namespace std;

int main(){
    fast;
    int t; cin >> t;
    while(t--){
        int n;cin >> n;
        int arr[n];
        for( int i = 0 ; i < n ;i++){
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int res[n];
        for( int i = 0; i < n;i++){
            res[i] = i+1;
        }
        for(auto ans:res) cout << ans << " ";
        cout << endl;
    }
    return 0;
}




