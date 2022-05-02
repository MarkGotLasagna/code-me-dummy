/*  PROBLEM
    write a program that takes as input a number
    and checks if it is even or odd
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    
    int n;
    
    while(true) {
        cout << "Feed me the number: ";
        cin >> n;
        if(n%2 == 0)
            cout << "even" << endl;
        else
            cout << "odd" << endl;
    }
    
    return(0);
}

/*  SOLUTION
    we can achieve this by using the '%' operator,
    which returns the remainder of a natural division
*/