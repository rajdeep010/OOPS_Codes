#include<bits/stdc++.h>
using namespace std;
#include "student.cpp"


int main() {
    Student s1(35, 10);
    s1.print();

    Student s2(44, 23), s3(54, 1);

    cout << "Roll : " << s1.getRoll() << endl;
    cout << "Age : " << s1.getAge() << endl;

    cout << Student::getTotalStudents() << endl;

    return 0;
}