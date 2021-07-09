#include <iostream>
#include <fstream>
using namespace std;


int main() {
    ifstream fi;
    fi.open("data.txt");
    string line;
    while (fi) {
        getline(fi, line);
        cout << line << endl;
    }
    return 0;
}