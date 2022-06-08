/*  PROBLEM
    write a program that takes 3 inputs in the form <number> <operator> <number>,
    calculates the result of the operation and returns the result
    <operator> is one of the five arithmetic operators +,-,*,/,%
    example: 1 + 1 = 2
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int x, y, res;
    char op, choice;
    bool err=false;

    // to ask to continue or not 
    do {
        // to do the operations
        do {
            err = false;
            cout << "Expression: ";
            cin >> x >> op >> y;
            switch (op) {
            case '+':
                res = x+y;
                break;
            case '-':
                res = x-y;
                break;
            case '*':
                res = x*y;
                break;
            case '/': case ':':
                if(y!=0) res = x/y;
                    else {
                        cout << "Error" << endl;
                        err = true;
                    }
                break;
            case '%': // modulo returns the remainder of a division
                if(y!=0) res = x%y;
                    else {
                        cout << "Error" << endl;
                        err = true;
                    }
                break;
            default:
                cout << "Error" << endl;
                cin.ignore(32737, '\n'); // everything ignored after wrong op
                err = true;
            }
        } while (err);

        if(!err) cout << "Result: " << res << endl;

        // to ask to continue or not
        do {
            cout << "Continue?(y/n) " << endl;
            cin >> choice;
        } while (choice!='y' && choice!='n');

        if(choice=='n') {
            cout << "Exiting..." << endl;
            break;
        }
    } while (choice='y');
    
    return 0;
}

/*  SOLUTION
    a switch-case is exactly for this kind of problems: from the cin pipe,
    which takes the first number, the operator and another number, we extract the operator 
    and choose what to do with it inside the switch()
    in the above code are additionally added some do-while to continue the execution 
    if the user wants to
*/