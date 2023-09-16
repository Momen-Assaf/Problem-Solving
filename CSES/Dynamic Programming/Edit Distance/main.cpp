#include<bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define endl '\n'
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

using namespace std;

int main(){
    //fast;
    string word1,word2;
    cin >> word1 >> word2;
    int n = word1.length();
    int m = word2.length();
    int ed[n+1][m+1];

    for( int i = 0 ; i <= n; i++){
        ed[i][0] = i;
    }
    for( int i = 1 ; i <= m; i++){
        ed[0][i] = i;
    }
    for( int j = 1; j <= m ; j++){
        for( int i = 1; i <= n; i++){
            if( word1[i-1] == word2[j-1]) ed[i][j] = ed[i-1][j-1];
            else {
                ed[i][j] = min(min(ed[i-1][j],ed[i][j-1]),ed[i-1][j-1])+ 1;
            }
        }
    }
    cout << ed[n][m] << endl;
    return 0;
}




