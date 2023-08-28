#include <iostream>

int main(){
    int n = 0;
    long long out = 0;
    std::cin >> n;
    long arr[n];
    for (int i = 0; i< n; i++){
        std:: cin >> arr[i];
    }

    for(int i = 0; i < n-1;i++){
        if(arr[i+1] < arr[i]){
            long tmp = arr[i] - arr[i+1];
            arr[i+1]+=tmp;
            out+=tmp;
        }
    }
    std::cout << out;

}