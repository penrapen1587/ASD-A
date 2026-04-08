#include <iostream>
#include <string>
using namespace std;

int main() {
	struct BUKU {
		string nama;
		int HLM;
		int tahun;
		int harga;
	};
	BUKU data;
	data.nama = "aljabar";
	data.HLM = 24;
	data.tahun = 1976;
	data.harga = 19000;
	cout<< endl;
	cout<< endl;
	cout << "judul= " << data.nama << endl;
	cout << "jumlah halaman = " << data.HLM <<endl;
	cout << "tahun terbit = " << data.tahun << endl;
	cout << "harga buku =" << data.harga <<endl;
cin.get();
}
