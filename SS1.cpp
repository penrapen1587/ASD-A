#include <iostream>
using namespace std;

int Search01(int tika[], int JmlElemenArray, int Elemen);



int main() {
int JmlElemenArray ;

    cout << "*****************" << endl;
    cout << "SEQUENTIAL SEARCH " << endl;
    cout << "*****************" << endl;
	cout << " Masukan Jumlah kendaraan :  "; cin >> JmlElemenArray;
	int tika[JmlElemenArray] ;
	for (int i = 0; i <JmlElemenArray; i++){
		cout << "Masukan antrian kendaraan ke " << i+1 << " : "; cin>> tika[i];
	}

    cout << "\nIsi data nya adalah:" << endl;
    cout << "................................" << endl;

    for (int count = 0; count < JmlElemenArray; count++)
        cout << " " << "antrian ke  " << count + 1 << " --> " << tika[count] << endl;

    cout << endl;

    int SearchElemen = 0;
    int flaq = 0;

    cout << "masukan nomor yang ingin dicari ?  ";
    cin >> SearchElemen;
	cin.ignore();

    flaq = Search01(tika, JmlElemenArray, SearchElemen);

    if (flaq != -1)
        cout << "nomor yang dicari ditemukan pada posisi: antrian ke " << flaq << endl;
    else
        cout << "nomor yang Anda cari tidak ditemukan" << endl;

    cin.get();
    return 0;
}

int Search01(int tika[], int JmlElemenArray, int Elemen) {
    int flaq = -1;
    for (int count = 0; count < JmlElemenArray; count++) {
        if (Elemen == tika[count]) {
            flaq = count + 1;
            break;
        }
    }
    return flaq;
}