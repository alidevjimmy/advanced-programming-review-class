#include <iostream>

using namespace std;

void swapWithPointer(int *a , int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapWithRefrence(int &a , int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a[4] = {4,2,1,6};
    swapWithRefrence(a[1],a[3]);
    cout << a[1] << ' ' << a[3] << endl;
    return 0;
}