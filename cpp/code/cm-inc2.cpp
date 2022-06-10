/*  PROBLEM
    write a program that converts centimeters to inches or vice versa
    note: 1 in = 2.54 cm
*/

#include <iostream>

#define DIFFERENCES 2.54
#define toString(x) (x == 'i'? "inch":"cm") 
#define converted(x) (x == 'i'? "cm":"inch") 
#define convert(v, x) ((x == 'i') ? v / DIFFERENCES : v * DIFFERENCES )

using namespace std;

int main()
{
    char symbol;
    float value;
    cout << "Insert the value with symbol symbol i(inch) or c(cm): ";
    cin >> value >> symbol;
    while (symbol != 'i' && symbol != 'c') 
    {
        cout << "ERROR: enter new value and symbol: ";
        cin.clear();
        cin >> value >> symbol;
    }
    cout << value << " " << toString(symbol) << " = " << convert(value, symbol) << " " << converted(symbol) << endl;
    return 0;
}
