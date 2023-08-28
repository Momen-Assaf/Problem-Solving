#include <iostream>
using namespace std;

void sol(int max) {
    int str[max];
    int temp = max - 1;
    str[0] = temp;
    for (int i = 1; i <= max / 2 - 1; i++) {
        temp -= 2;
        str[i] = temp;
    }
    temp = max;
    for (int i = max / 2 + 1; i <= max; i++) {
        temp -= 2;
        str[i] = temp;
    }
    str[max / 2] = max;

    for (int i = 0; i < max; i++) {
        std::cout << str[i] << " ";
    }
}

int main() {
    int t;
    cin >> t;
    while(t!=0){
        int max;
        cin >> max;
        if ( 1 < max && max < 4) {
            cout << "NO SOLUTION\n";
        }
        else sol(max);
        t--;
    }


    return 0;
}
