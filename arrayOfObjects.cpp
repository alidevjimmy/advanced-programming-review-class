#include <iostream>

using namespace std;

class student {
    public:
    string name;
    int stuNumber;
    float mark;
    student(string name = "", int stuNumber = 0, float mark = 0.0);

};

student::student(string name, int stuNumber, float mark) {
    this->name = name;
    this->stuNumber = stuNumber;
    this->mark = mark;
}

int main() {
    student students[2];
    students[0] = student("mamad",999999,20);
    cout << students[0].mark << endl;
    return 0;
}