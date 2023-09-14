#include<bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define endl '\n'
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

using namespace std;

int main(){
    fast;
    int x,y;cin >> x >> y;
    int mx = max(x,y);
    int chance = 6+1 - mx;
    if(chance == 0){
        cout << 0/1 << endl;
    }
    int g = __gcd(chance,6);
    cout << (chance/g) << '/' << (6/g) << endl;
    return 0;
}




