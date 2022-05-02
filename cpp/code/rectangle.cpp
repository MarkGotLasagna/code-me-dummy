/*  PROBLEM
    write a program that takes as input two integers and prints
    a rectangle using this two (define a function if you feel to)
*/
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

/*  FUNCTION THAT DOES IT
void printRect(int length, int height, char achar) {
    for(int i=1; i<=height; i++) {
        for(int j=1; j<=length; j++) {
            cout << asterisk;
        }
        cout << '\n';
    }
}
*/

int main() {

    int l,h;

    char ast = '*'; // customizable

    cout << "length(l): ";
    cin >> l;
    cout << "height(h): ";
    cin >> h;

    cout << '\n';
    // printRect(l,h,ast);
    for(int i=1; i<=h; i++) {
        for(int j=1; j<=l; j++) {
            cout << ast;
        }
        cout << '\n';
    }
    cout << '\n';

    return(0);

}

/*  SOLUTION
    a nested loop for both height and length will do the trick:
    as a row is completed we insert a newline '\n' to do the other and so on
*/