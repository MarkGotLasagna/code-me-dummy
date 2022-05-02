/*  PROBLEM
    write the simplest 'Hello world!' you can think of in C++
*/

// @author Marco Rondelli
// @date 2022-03
// g++ -Wall -o helloworld helloworld.cpp

#include <iostream> // includes the I/O header file
// when dealing with I/O streams, this directive mustn't be omitted
// it is pretty much necessary for all c++ programs

using namespace std; // uses std as namespace
// std contains many iostream definitions: cin, cout, endl;
// it can be omitted but '::' must be used instead

// the main function calls all the other functions
// the type is 'int' as in 'integer'
int main() {
    cout << "Hello world!" << endl; // '<<' is an output operator
    return(0); // function terminates with success (0)
}