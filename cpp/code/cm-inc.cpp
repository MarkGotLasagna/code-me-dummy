/*  PROBLEM
    write a program that converts centimeters to inches or vice versa
    note: 1 in = 2.54 cm
*/

#include <iostream>

using namespace std;

int main() {

    cout << "1. in -> cm\n"
             "2. cm -> in" << endl;

    float a, b, c=2.54;
    int x;

    // will check input option
    cin >> x;
    while(x!=1 && x!=2) {
        cout << "Wrong option, retry" << endl;
        cin >> x;
    }

    if (x == 1) {
        cout << "Inches: ";
        cin >> a;
        b = a*c;
        cout << a << " inches are equal to " << b << " centimeters" << endl;
    } else {
        cout << "Centimeters: ";
        cin >> a;
        b = a/c;
        cout << a << " centimeters are equal to " << b << " inches" << endl;
    }

    return 0;
}

/*  SOLUTION
    knowing the conversion quota, we can assign it to some variable (c),
    with that we're going to store inside another variable the result of the conversion:
    centimeters = inches * c
    inches = centimeters / c
*/