#include <iostream>
using namespace std;

struct BTBT {
int JmlElemenArray ;
}bt;
int Search01(int tika[], int JmlElemenArray, int Elemen);


int main() {

    cout << "*****************" << endl;
    cout << "SEQUENTIAL SEARCH" << endl;
    cout << "*****************" << endl;
	cout << " Masukan Jumlah data :  "; cin >> bt.JmlElemenArray;
	int tika[bt.JmlElemenArray] ;
	for (int i = 0; i <bt.JmlElemenArray; i++){
		cout << "Masukan Data ke " << i+1 << " : "; cin>> tika[i];
	}

    cout << "\nIsi data nya adalah:" << endl;
    cout << "................................" << endl;

    for (int count = 0; count < bt.JmlElemenArray; count++)
        cout << " " << "Data [" << count + 1 << "] --> " << tika[count] << endl;

    cout << endl;

    int SearchElemen = 0;
    int flaq = 0;

    cout << "Masukkan data yang akan Anda cari? ";
    cin >> SearchElemen;
	cin.ignore();

    flaq = Search01(tika, bt.JmlElemenArray, SearchElemen);

    if (flaq != -1)
        cout << "Data yang dicari ditemukan pada posisi: Data[" << flaq << "]" << endl;
    else
        cout << "Data yang Anda cari tidak ditemukan" << endl;

    cin.get();
    return 0;
}

int Search01(int tika[], int JmlElemenArray, int Elemen) {
    int flaq = -1;
    for (int count = 0; count < bt.JmlElemenArray; count++) {
        if (Elemen == tika[count]) {
            flaq = count + 1;
            break;
        }
    }
    return flaq;
}