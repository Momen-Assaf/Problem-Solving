#include <iostream>

int main() {
    int n = 5, op = 0;
    int arr[] = {3, 2, 5, 1, 7};

    for (int i = 0; i < n - 1; i++) {
        while (arr[i + 1] < arr[i]) {
            arr[i + 1]++;
            op++;
        }
    }
    std::cout << op;

    return 0;
}
