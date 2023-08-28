#include<bits/stdc++.h>
#define ll long long

int N,M;
int matrix[1000][1000];
int ans;
using namespace std;

bool zero(int x, int y){
    return (matrix[x][y] == 0);
}
void checkAdjacent(int x,int y){
    if(x > 0)if(zero(x-1,y))ans++;
    if(zero(x+1,y))ans++;
    if(y>0)if(zero(x,y-1))ans++;
    if(zero(x,y+1))ans++;
}

void solution(int x, int y){
    if(matrix[x][y] == 0){
        if(x != N-1) solution(x+1,y);
        else x=0;
        if(y !=M-1) solution(x,y+1);
        else y=0;
        if(x==N-1 && y==M-1){
            cout << ans;
            return;
        }
    }
    else{
        checkAdjacent(x,y);
    }
}

int main() {

    int t;
    cin >> t;
    while(t!=0){

        cin >> N >> M;
        for( int i =0; i < N; i++){
            for(int j = 0; i < M; j++){
                cin >> matrix[i][j];
            }
        }
        t--;
    }
    return 0;
}
