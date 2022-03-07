/*  PROBLEM
    write a program that takes as input 3 numbers (in R)
    and calculates 2 real solutions of a quadratic formula
*/

#include <iostream>
#include <cmath> // sqrt(float)

using std::cin;
using std::cout;
using std::endl;

int main() {

    float a,b,c;
    float sol1, sol2;

    cout << "Feed me the 3 constants of the quadratic equation: " << endl;
    cin >> a >> b >> c;

    float delta = (b*b)-(4*a*c);

    if(a == 0) {
        cout << "'a' can't be 0" << endl; // not a quadratic formula
        return(1);
    } else {
        if(delta < 0) {
            cout << "The 'delta' is a negative number!" << endl; // only real solutions accepted
            return(1);
        } else {
            sol1 = (-b + (sqrt(delta)/(2*a)));
            sol2 = (-b - (sqrt(delta)/(2*a)));
            cout << "Your solutions are: x=" << sol1 << " x=" << sol2 << endl;
        }
    }
     
    return(0);
}

/*  SOLUTION
    calculating the solutions is as simple as writing down the formula
    attention must be paid to the order of the operations
*/