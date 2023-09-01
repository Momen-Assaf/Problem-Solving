#include<bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define pb push_back
#define pq priority_queue
#define endl '\n'
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define read_file freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);

using namespace std;

string bur;
int B = 0, S = 0, C = 0;
ll pob,pos,poc;
int bp,sp,cp;
ull r;


bool possible(ll target){
    ll bt,st,ct;
    bt = (target*B - pob)*bp;if(bt < 0)bt=0;
    st = (target*S - pos)*sp;if(st < 0)st=0;
    ct = (target*C - poc)*cp;if(ct < 0)ct=0;
    if(bt+st+ct > r) return false;
    else return true;
}
int binarySearch(ll low, ll high){
    while( low < high) {
        ll mid = (low + high + 1) / 2;
        if (possible(mid)) {
            low = mid;
        }
        else if (!possible(mid)) {
            high = mid - 1;
        }
    }
    cout << low << endl;
}
int main(){
    cin >> bur;
    for(int i = 0; i < bur.length(); i ++){
        switch(bur[i]){
            case 'B':
                B++;
                break;
            case 'S':
                S++;
                break;
            case 'C':
                C++;
                break;
        }
    }
    cin >> pob >> pos >> poc;
    cin >> bp >> sp >> cp;
    cin >> r;
    binarySearch(0,1000000000000000);
    return 0;
}