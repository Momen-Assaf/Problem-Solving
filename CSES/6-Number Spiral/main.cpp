#include <iostream>
using namespace std;
void sol(long long y, long long x){
    long long num;
    if(x >= y){
        if(x%2 != 0) num = x*x - (y-1);
        else num = (x-1)*(x-1) + y;
    }
    else {
        if (y % 2 == 0) num = y * y - (x - 1);
        else num = (y - 1) * (y - 1) + x;
    }
    cout << num << "\n";
}
int main() {
    int n;
    cin >> n;
    while( n!= 0) {
        long long y, x;
        cin >> y >> x;
        sol(y,x);
        n--;
    }
    return 0;
}
