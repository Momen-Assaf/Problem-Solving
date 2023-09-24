#include<bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define endl '\n'
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

using namespace std;

int main(){
    fast;
    int t;cin >> t;
    bool arr[10][10];
    while(t--){
        for(int i = 0; i < 10;i++){
            for( int j = 0; j < 10;j++){
                char x;cin >> x;
                if(x == 'X')arr[i][j] = true;
                else arr[i][j] = false;
            }
        }
        int score = 0;
        for( int i = 0; i < 10;i++){
            for( int j = 0; j < 10;j++){
                if((i == 0 || j == 0 || i == 9 || j == 9) && arr[i][j])score +=1;
                else if((i == 1 || j == 1 || i == 8 || j == 8) && arr[i][j])score +=2;
                else if((i == 2 || j == 2 || i == 7 || j == 7) && arr[i][j])score +=3;
                else if((i == 3 || j == 3 || i == 6 || j == 6) && arr[i][j])score +=4;
                else if((i == 4 || j == 4 || i == 5 || j == 5) && arr[i][j])score +=5;
            }

        }
        cout << score << endl;
    }
    return 0;
}




