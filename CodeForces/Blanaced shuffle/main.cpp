#include<bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define pb push_back
#define pq priority_queue
#define endl '\n'
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

using namespace std;

int main() {
    fast;
    string s; cin >> s;
    int flag = 0;
    for(int i = 0; i < s.length(); i++) {
        if(i == 0 || i == 2)printf("(");
        else if(i == 1 || i == s.length()-1)printf(")");
        else if(flag == 0) {
            printf("(");flag++;
        }
        else if(flag == 1) {
            printf(")");flag--;
        }
    }
    return 0;
}




