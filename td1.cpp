#include <iostream>
#include <string>
using namespace std;

typedef int angka;
typedef float pecahan;
typedef char huruf[30];

int main (){
	angka umur; 
	pecahan percah;
	huruf nama;
	huruf hurf;
	cout << " masukan nama :  "; cin >> nama;
	cout << " nasukan umur : " ; cin >> umur;
	cout << " masukan bilangan pecahna : "; cin >> percah;
	cout << " masukan satu huruf : "; cin >> hurf;
	
	cout<< endl;
	cout << " NAma : " << nama<< endl;
	cout << " umur : " << umur<< endl;
	cout << " bilangan pecahan : "<< percah<< endl;
	cout << " satu huruf : "<< hurf << endl;
	cin.get();
	
}