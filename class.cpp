#include <iostream>
#include <cstring>
using namespace std;

class student {
    public:
    string name;
    int stuNumber;
    float mark;
    student(string name, int stuNumber, float mark);

};

student::student(string name, int stuNumber, float mark) {
    this->name = name;
    this->stuNumber = stuNumber;
    this->mark = mark;
}

int maxStu(student s1, student s2) {
    if (s1.mark > s2.mark) {
        return s1.stuNumber;
    }
    return s2.stuNumber;
}

float avg(student s1, student s2) {
    return (s1.mark + s2.mark)/2;
}

int main() {
    student s1("mohammad",999999,20), s2("karim" , 989898, 19.5);
    cout << avg(s1,s2) << endl;
    return 0;
}