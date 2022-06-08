/*  ALTERNATIVE to mean.cpp
    this assumes you already know how many inputs there will be
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {

	int tot;
	int sum = 0;
	int input;

	cout << "Enter tot count : " << endl; cin >> tot;

	for (int i = 0; i < tot; i++)
	{
		cout << "Enter number " << i + 1 << " :" << endl; cin >> input;
		sum += input;
	}

	cout << "Arithmetic Mean : " << (sum / tot) << endl;

	return 0;
}