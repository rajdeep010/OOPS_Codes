#include<bits/stdc++.h>
using namespace std;
#include "fractionClass.cpp"


int main() {
    Fraction f1(15, 7), f2(21, 8);

    f1.print();
    f2.print();

    // f1.add(f2);

    // in this call f1 will be passed in 'this'
    // and f2 is passed in arguments
    Fraction f3 = f1 + f2;

    f1.print();
    f2.print();

    f3.print();

    Fraction f4 = f1 * f2;
    f4.print();

    if (f3 == f1)
        cout << "Equal" << endl;

    else
        cout << "Not Equal" << endl;

    Fraction f5(12, 2);
    Fraction f6 = ++(++f5);

    f6.print();
    f5.print();

    f6 += f5;
    f6.print();

    f6 += f1;
    f6.print();

    f6++;
    f6.print();

    (f5 += f6) += f3;
    f5.print();


    return 0;
}