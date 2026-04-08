#include <iostream>
using namespace std;

int main () {
	int n, *pn;
	n = 20;
	cout << n << endl;
	pn = new int; 
	*pn = 50;
	n = *pn;
	cout << n << endl;
	
	cin.get();
}