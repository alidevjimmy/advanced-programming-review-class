#include <iostream>

using namespace std;

int main() {
    int *p = new int[3];
    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    cout << *(p+1) << endl;
    delete[] p;
    return 0;
}