/*  PROBLEM
    using the decimal 'int' value associated to each 'char' (e.g. 'A' = 65),
    try printing the latin alphabet
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {

    // char 'A' corresponds to decimal 65 in ASCII
    char start = 'A';

    // starting at 'i=0'; as long as 'i<26'; add 1 to 'i'
    for(short int i=0; i<26; i++) {
        char next = start + i;
        if(i%5 == 0) // '%' returns the remainder of an int division
            cout << '\n'; // newline
        cout << next << ' ';
    }

    cout << '\n' << endl; // newline and flush stream

    return(0);
}

/*  SOLUTION
    the latin alphabet is comprised of 26 symbols, ranging 1 to 26 (A to Z)
    our goal is to print such alphabet
    to do so, we can define a 'char' with the starting point being set to the 1st letter 'A',
    this letter is indexed as int 65 in the ASCII table,
    using a cycle we can iterate 'i' between 0 and 25 and print a new character, 'next', which is the result
    of the operation 'start + i'
*/