#include <iostream>

using namespace std;

int sum(int n) {
    int **c = new int*[n];
    int sum = 0;
    for (int i = 0 ; i < n ; i++) {
        c[i] = new int[n];
        for (int j = 0 ; j < n ; j++) {
            cin >> c[i][j];
            sum += c[i][j];
        }
    }

    for (int i = 0 ; i < n ; i++) {
        delete[] c[i];
    }
    delete[] c;

    return sum;
}

int main() {
    cout << sum(2) << endl;
    return 0;
}