#include <iostream>

using namespace std;

int* increment(int a[], int n) {
    for (int i = 0 ; i < n ; i++) {
        a[i]++;
    }
    return a;
}

int main() {
    int a[4] = {5,3,1,3}, *arr;
    arr = increment(a, 4);
    for (int i = 0 ; i < 4 ; i++) {
        cout << arr[i] << ' ';
    }
    return 0;
}