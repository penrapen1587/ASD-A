#include <iostream>
#include <string>
using namespace std;

struct barang {
	int kode;
	string nama;
	int stock;
}br;

int Search01(int tika1[], string tika[],int tika2[], int JmlElemenArray, string Elemen);

int main() {
int JmlElemenArray ;

    cout << "********" << endl;
    cout << "SEQUENTIAL SEARCH" << endl;
    cout << "********" << endl;
	cout << " Masukan Jumlah data :  "; cin >> JmlElemenArray;
	string tika[JmlElemenArray] ;	
	int tika2[JmlElemenArray] ;	
	int tika1[JmlElemenArray] ;
	for (int i = 0; i <JmlElemenArray; i++){
		cout << "Masukan kode barang  " << i+1 << " : "; cin>> tika1[i];
		cout << "Masukan nama barang " << i+1 << " : "; cin>> tika[i];
		cout << "Masukan jumlah stock" << i+1 << " : "; cin>> tika2[i];
	}

    cout << "\nIsi data nya adalah:" << endl;
    cout << "................................" << endl;

    for (int count = 0; count < JmlElemenArray; count++)
        cout << " " << "Data [" << count + 1 << "] --> " << tika1[count]<< " "<< tika[count]<< " " <<tika2[count] << endl;

    cout << endl;

    string SearchElemen;
    int flaq = 0;

    cout << "Masukkan nama barang yang akan Anda cari? ";
    cin >> SearchElemen;

    flaq = Search01(tika1, tika, tika2, JmlElemenArray, SearchElemen);

    if (flaq != -1){
        cout << "data barang ditemukan " << flaq  << endl;
			cout <<" kode barang : " << tika1[flaq-1];
			cout <<" nama barang : " << tika[flaq-1];
			cout <<" stock barang : " << tika2[flaq-1];
		}
    else
        cout << "Data yang Anda cari tidak ditemukan" << endl;
    cin.get();
    return 0;
	
}
int Search01(int tika1[], string tika[],int tika2[], int JmlElemenArray, string Elemen) {
    int flaq = -1;
    for (int count = 0; count < JmlElemenArray; count++) {
        if (Elemen == tika[count]) {
            flaq = count + 1;
            break;
        }
    }
    return flaq;
}