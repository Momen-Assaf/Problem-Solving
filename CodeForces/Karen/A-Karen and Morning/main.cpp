#include<bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define pb push_back
#define pq priority_queue
#define endl '\n'
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

using namespace std;

int n,m,ans;
int main(){
    fast;
    scanf("%d:%d",&n,&m);

    while(1) {
        if (n % 10 == m / 10 && n / 10 == m % 10) break;
        ans++;
        m++;
        if (m == 60) {
            m = 0;
            n++;
        }
        if (n == 24)n = 0;
    }
    cout << ans << endl;
    return 0;
}