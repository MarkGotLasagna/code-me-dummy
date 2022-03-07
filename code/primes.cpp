/*  PROBLEM
    check for primality of an input number
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    
    int n;

    cin >> n;
    
    if(n<=1) {
        cout << "not prime" << endl;
        return(0);
    }

    for(int i=2; i<=n/2; i++) { // checking beyond n/2 is redundant
        if(n%i == 0) { // if 'no remainder of previous number'
            cout << "not prime" << endl;
            return(0);
        } else {
            cout << "is prime" << endl;
            return(0);
        }
    }

    cout << "is prime" << endl;
    return(0);
}

/*  SOLUTION
    a prime number is divisible by 1 and itself only,
    so if another dividend 'i' is found for 'n', that number will not be prime
*/