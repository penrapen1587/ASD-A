#include <iostream>
#include <string>
using namespace std;

int main() {
	struct MATAKULIAH {
		string nama;
		int sks;
		char nHuruf;
		float nAngka;
	};
	MATAKULIAH Data_MK;
	Data_MK.nama = "Prevansyah sjafar";
	Data_MK.sks = 24;
	Data_MK.nHuruf = 'A';
	Data_MK.nAngka = 4.00;
	cout<< endl;
	cout<< endl;
	cout << "Mata kuliah = " << Data_MK.nama << endl;
	cout << "sks = " << Data_MK.sks <<endl;
	cout << "Nilai = " << Data_MK.nHuruf << endl;
	cout << "indeks = " << Data_MK.nAngka <<endl;
cin.get();
}
