#include <iostream>
using namespace std;

void sol(int n, int *arr){

}
int main() {

    int t;
    cin >> t;
    int a;

    while(t!=0){
        cin >> a;
        long arr[a];
        for(int i =0; i< a;i++){
            cin >> arr[i];
        }
        //sol(a, reinterpret_cast<int *>(*arr));
        int lb = 0, lc = 0;
        long b[lb], c[lc];
        //b[0] = arr[0];
        for(int i = 0; i < a; i++){
            if( arr[i]%b[lb-1] == 0){
                b[lb] = arr[i];
                lb++;
            }
            else if(arr[i]%b[lb-1] != 0){
                c[lc] = arr[i];
                lc++;
            }
            else return -1;
        }
        cout << lb << " " << lc << "\n";
        for( int i = 0; i <lb; i++){
            cout << b[i] << " ";
        }
        cout << "\n";
        for( int i = 0; i < lc; i++){
            cout << b[i] << " ";
        }
        cout << "\n";
        t--;
    }
    return 0;
}
