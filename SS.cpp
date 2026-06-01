#include <iostream>
using namespace std;

int Search01(int tika[], int JmlElemenArray, int Elemen);

int main() {
    const int JmlElemenArray = 11;
    int tika[JmlElemenArray] = {22, 61, 15, 66, 18, 25, 24, 87, 55, 45, 10};

    cout << "********" << endl;
    cout << "** SEQUENTIAL SEARCH **" << endl;
    cout << "********" << endl;

    cout << "\nIsi data nya adalah:" << endl;
    cout << "................................" << endl;

    for (int count = 0; count < JmlElemenArray; count++)
        cout << " " << "Data [" << count + 1 << "] --> " << tika[count] << endl;

    cout << endl;

    int SearchElemen = 0;
    int flaq = 0;

    cout << "Masukkan data yang akan Anda cari? ";
    cin >> SearchElemen;

    flaq = Search01(tika, JmlElemenArray, SearchElemen);

    if (flaq != -1)
        cout << "Data yang dicari ditemukan pada posisi: Data[" << flaq << "]" << endl;
    else
        cout << "Data yang Anda cari tidak ditemukan" << endl;

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