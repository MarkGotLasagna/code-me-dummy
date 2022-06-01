#include <iostream>

using namespace std;

int main() {

	int x, y, z, k, h;
	cout << "Input the current year: ";
	cin >> x;
	cout << "Input your age: ";
	cin >> y; 					 //eta' attuale
	z = x-y;						 //anno di nascita
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
