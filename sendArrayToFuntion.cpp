#include <iostream>

using namespace std;

void printArray(int *a, int n) {
    for (int i = 0 ; i < n; i++) {
        cout << *(a+i) << ' ';
    }
}

int main() {
    int n = 10;
    int a[10] = {3,2,5,3,2,3,4,2,4,1};
    printArray(a, n);
    return 0;
}