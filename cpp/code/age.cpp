/*  PROBLEM
    write a program that takes as inputs the current year, your age,
    and a year in the future/past, to calculate what your age will be/was
*/

#include <iostream>

using namespace std;

int main() {

	int x, y, z, k, h;
	cout << "Input the current year: ";
	cin >> x;
	cout << "Input your age: ";
	cin >> y;
	z = x-y;
	cout << "Input the year in the future: ";
	cin >> k;
		
	if(k>z && k<x) {
		h= y+(k-x);
		cout << "Your age in "<< k <<" was "<< h << endl;
	}
	else if(k>x){
		h= y+(k-x);
		cout << "Your age in "<< k <<" will be "<< h <<endl;
		}
	
	else cout << "In the year "<< k <<" you still weren't born " << endl;		
	return 0;		
}

/*	SOLUTION
	store in some variables (say x,y,k) the values required for the calculations,
	the age in the past/future can be calculated as follows: h=age+(futurepast-present)
	add some checks: if present-futurepast is a negative number
*/