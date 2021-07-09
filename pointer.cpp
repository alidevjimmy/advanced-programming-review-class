#include <iostream>

using namespace std;

void change(int x) {
    x = 20;
}

void changeWithPointer(int *x) {
    *x = 20;
}

void changeWithRefrence(int &x) {
    x = 20;
}

int main() {
    int x = 0;
    changeWithRefrence(x);
    cout << x << endl;
    return 0;
}