#include<bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define endl '\n'
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

using namespace std;

int main(){
    fast;
    int t;cin >>t;
    while(t--){
        int n;cin>>n;
        int arr[n];
        for(int i = 0;i<n;i++){
            cin>>arr[i];
        }
        int prod = 1;
        int mx = 0;
        for( int j = 0;j<n;j++) {
            arr[j]++;
            for (int i = 0; i < n; i++) prod *= arr[i];
            mx = max(mx,prod);
            prod = 1;
            arr[j]--;
        }
        cout << mx << endl;
    }
    return 0;
}




