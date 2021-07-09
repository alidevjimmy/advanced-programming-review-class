#include <iostream>
#include <fstream>
using namespace std;


int main() {
    ofstream fo;
    fo.open("data.txt");
    if (!fo.is_open()) {
        cout << "cannot open file!\n";
        exit(0);
    }
    string line;
    while (fo) {
        getline(cin, line);
        if (line == "-1") {
            break;
        }
        fo << line << endl;
    }
    return 0;
}