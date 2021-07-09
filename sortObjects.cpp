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

void swapWithPointer(student *a , student *b) {
    student temp = *a;
    *a = *b;
    *b = temp;
}

void sort(student s[], int n) {
    for (int i = 0 ; i < n - 1; i++) {
        for (int j = 0 ; j < n - i - 1; j++) {
            if (s[j].mark > s[j + 1].mark) {
                swapWithPointer(&s[j], &s[j+1]);
            }
        }
    }
}

void printStudents(student s[], int n) {
    cout << "**********" << endl;
    for (int i = 0 ; i < n; i++) {
        cout << s[i].name << ' ' << s[i].stuNumber << ' ' << s[i].mark << endl;
    }
}

int main() {
    int n = 3;
    student s[n];
    for (int i = 0 ; i < n; i++) {
        cin >> s[i].name >> s[i].stuNumber >> s[i].mark;
    }
    sort(s,n);
    printStudents(s,n);
    return 0;
}