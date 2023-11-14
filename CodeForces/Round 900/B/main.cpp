#include<bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define endl '\n'
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

using namespace std;

int main(){
    fast;
    int t;cin>>t;
    while(t--){
        int n;cin >> n;
        ll a[n];
        for(int i = 0 ; i < n;i++){
            a[i] = 6+i;
        }
        int x = 0;
        while(x == 0){
            for( int i = 0 ;i < n - 2;i++){
                if((3*a[i+2]) % (a[i+1]+a[i])!=0 && (a[i] < a[i+1] < a[i+2]))x++;
                else{
                    if(a[i]+a[i+1] % 2 == 0)a[i+2]++;
                    else{
                        if(a[i]%2 == 0)a[i+1]++;
                        else a[i]++;
                    }
                }
            }
        }
        for(int i = 0 ; i < n ;i++)cout << a[i] << ' ';
        cout << endl;
    }
    return 0;
}




