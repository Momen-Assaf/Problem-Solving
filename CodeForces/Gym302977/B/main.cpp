#include<bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define pb push_back
#define pq priority_queue
#define endl '\n'
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define read_file freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);

using namespace std;

int n,k;
string str;
string usable;

bool valid(){
    for( int i = 0 ; i < k; i ++){
        for (int j = 0; j < n;j++){
            if(usable[i] == str[j]){
                return true;
            }
        }
    }
    return false;
}
void sol(){
    ll f[k+1];
    f[0] = 0;
    f[1] = 1;
    if(!valid()) {
        cout << 0 << endl;
        return;
    }
    for( int i = 2; i <= k; i++){

    }
}
int main(){
    cin >> n >> k;
    for( int i = 0 ; i < n ; i++){
        cin >> str[i];
    }
    for(int i = 0 ; i < k ; i++){
        cin >> usable[i];
    }

    sol();
    return 0;
}