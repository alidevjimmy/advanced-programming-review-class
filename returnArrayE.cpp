#include <iostream>

using namespace std;

int* getArray(int n) {
    int *c = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
    return c;
}

int main() {
    int *a;
    a = getArray(4);
    for (int i = 0; i < 4; i++) {
        cout << a[i] << ' ';
    }
    return 0;
}