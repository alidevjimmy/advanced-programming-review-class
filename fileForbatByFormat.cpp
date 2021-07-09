#include <iostream>
#include <fstream>
using namespace std;


int main() {
    ofstream fo;
    fo.open("formarByFormat.txt");
    if (!fo.is_open()) {
        cout << "cannot open file!\n";
        exit(0);
    }
    string name;
    int stuNumber;
    float mark;
    while (fo) {
        cin >> name >> stuNumber >> mark;
        if (name == "-1" && stuNumber == 0 && mark == 0) {
            break;
        }
        fo << name << ' ' << stuNumber << ' ' << mark << endl;
    }
    fo.close();
    ifstream fi;
    fi.open("formarByFormat.txt");
    string line;
    while (fi) {
        fi >> name >> stuNumber >> mark;
        cout << name << ' ' << stuNumber << ' ' << mark << endl;
    }
    return 0;
    return 0;
}