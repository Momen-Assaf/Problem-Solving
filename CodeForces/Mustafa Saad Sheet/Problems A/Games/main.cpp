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
    int n; cin >> n;

    vector<pair<int, int>> vTeam(n);
    for(int i = 0;i<n;i++){
        cin >> vTeam[i].first >> vTeam[i].second;
    }
//    for(int i = 0 ; i < vTeam.size();i++){
//        cout << vTeam[i].first << ' ' << vTeam[i].second << endl;
//    }
    int ans = 0;
    for(int i = 0; i < n;i++){
        for(int j = 0;j < n;j++){
            if(vTeam[i].first == vTeam[j].second)ans++;
        }
    }
    cout << ans << endl;
    return 0;
}




