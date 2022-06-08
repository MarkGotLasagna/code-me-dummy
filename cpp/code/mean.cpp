/*  PROBLEM
    write a simple program that calculates the arithmetic mean of inputted scores 
    (max score: 30, base: 110) and halts when -1 is inserted
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {

    cout << "Input: " << endl;
    int in, sum=0, n=0;
    float base30, base110;

    while(in!=-1) {
        cin >> in;
        n += 1;
        sum += in;
    }

    // the input -1 to terminate the while() cycle is also summed,
    // we need to add +1 to the sum and subtract -1 to the count
    sum += 1;
    n -= 1;

    base30 = (float) sum/n;
    base110 = (base30*110)/30;
    cout << "base30: " << base30 << " | base110: " << base110 << endl;
    return 0;
}

/*  SOLUTION
    we store inside 3 variables: the input number, their sum and their count (n)
    a while cycle will sum each input, store it inside the variable 'sum' and add 1 to the count
    since the values are supposed to be in base30 already:
    base30 = sum / n
    to convert the result in base110:
    base110 = (base30 * 110) / 30
*/