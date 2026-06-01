#include <iostream>
using namespace std;

int Search01(string tika[], int JmlElemenArray, string Elemen);



int main() {
int JmlElemenArray ;

    cout << "********" << endl;
    cout << "** SEQUENTIAL SEARCH **" << endl;
    cout << "********" << endl;
	cout << " Masukan Jumlah data :  "; cin >> JmlElemenArray;
	string tika[JmlElemenArray] ;
	for (int i = 0; i <JmlElemenArray; i++){
		cout << "Masukan Data ke " << i+1 << " : "; cin>> tika[i];
	}

    cout << "\nIsi data nya adalah:" << endl;
    cout << "................................" << endl;

    for (int count = 0; count < JmlElemenArray; count++)
        cout << " " << "Data [" << count + 1 << "] --> " << tika[count] << endl;

    cout << endl;

    string SearchElemen;
    int flaq = 0;

    cout << "Masukkan data yang akan Anda cari? ";
    cin >> SearchElemen;
	cin.ignore();

    flaq = Search01(tika, JmlElemenArray, SearchElemen);

    if (flaq != -1)
        cout << "Data yang dicari ditemukan pada posisi: Data[" << flaq << "]" << endl;
    else
        cout << "Data yang Anda cari tidak ditemukan" << endl;

    cin.get();
    return 0;
}

int Search01(string tika[], int JmlElemenArray, string Elemen) {
    int flaq = -1;
    for (int count = 0; count < JmlElemenArray; count++) {
        if (Elemen == tika[count]) {
            flaq = count + 1;
            break;
        }
    }
    return flaq;
}