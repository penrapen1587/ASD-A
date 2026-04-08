#include <iostream>
using namespace std;

class mahasiswa{
	public:
	char NPM[9];
	char nama[30];
	float ipk;
	
};

int main (){
	mahasiswa data;
	cout << " Masukan NPM : "; cin >> data.NPM;
	cout << " Masukan Nama : "; cin >> data.nama;
	cout << " Masukan Nilai IPK : "; cin >> data.ipk;
	cout << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;
	cout << " 		DATA " << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;
	cout << " Nama Mahasiswa : "<< data.nama <<endl;
	cout << " NO NPM : " << data.NPM << endl;
	cout << " NILAI IPK :  " << data.ipk<< endl;
	cin.get();
	}