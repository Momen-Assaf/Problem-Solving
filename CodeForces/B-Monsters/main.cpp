#include <iostream>
#include <algorithm>

using namespace std;

void sol(int n, int k, int *hp) {
    pair<int,int> hpM[n];
    sort(hp, hp + n);
    reverse(hp, hp +n);
    for(int i = 0; i < n; i++){
        hpM[i].first = i+1;
        hpM[i].second = (hp[i]+1)/k;

        if( hpM[i].second <= 1){
            cout << hpM[i].first << " ";
        }
    }
//    sort(hpM,hpM + n);
//    for( int i = 0; i < n; i++){
//
//    }
}

int main() {
    int t;
    cin >> t;
    while( t!=0){
        int n;
        long k;
        cin >> n;
        cin >> k;
        int hp[n];
        for ( int i = 0; i < n; i++){
            cin >> hp[i];
        }
        sol(n,k,hp);
        t--;
    }
    return 0;
}
