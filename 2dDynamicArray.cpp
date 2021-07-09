#include <iostream>

using namespace std;


int main() {
    int **p = new int*[2];
    p[0] = new int[2];
    p[1] = new int[2];
    p[0][0] = 10;
    p[0][1] = 20;
    cout << p[0][0] << ' ' << p[0][1] << endl;
    return 0;
}