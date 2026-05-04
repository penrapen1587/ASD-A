#include <iostream>
#include <string>
using namespace std;
#include <iostream>
#include <string>
using namespace std;

typedef struct {
    string npm;
    string nama_mhs;
    double nilai;
} NilaiMK;

typedef struct elm *alamatelm;

typedef struct elm {
    NilaiMK Kontainer;
    alamatelm next;
} elemen;

typedef struct {
    elemen *first;
    elemen *last;
} queue;

void buatQkosong(queue *Q) {
    (*Q).first = NULL;
    (*Q).last = NULL;
}

int isKosong(queue Q) {
    bool hasil = false;
    if (Q.first == NULL) {
        hasil = true;
    }
    return hasil;
}

int jmlElemen(queue Q) {
    int hasil = 0;

    if (Q.first != NULL) {
        elemen *bantu;
        bantu = Q.first;

        while (bantu != NULL) {
            hasil = hasil + 1;
            bantu = bantu->next;
        }
    }
    return hasil;
}

void add(string npm, string nama_mhs, double nilai, queue *Q) {
    elemen *info;
    info = new elemen;

    info->Kontainer.npm = npm;
    info->Kontainer.nama_mhs = nama_mhs;
    info->Kontainer.nilai = nilai;
    info->next = NULL;

    if ((*Q).first == NULL) {
        (*Q).first = info;
    } else {
        (*Q).last->next = info;
    }
    (*Q).last = info;
}

void del(queue *Q) {
    if ((*Q).first != NULL) {
        elemen *hapus = (*Q).first;

        if (jmlElemen(*Q) == 1) {
            (*Q).first = NULL;
            (*Q).last = NULL;
        } else {
            (*Q).first = (*Q).first->next;
            hapus->next = NULL;
        }
        delete hapus;
    }
}

void CetakQueue(queue Q) {
    if (Q.first != NULL) {
        cout << "MENAMPILKAN QUEUE\n";
        elemen *bantu = Q.first;
        int i = 1;

        while (bantu != NULL) {
            cout << "-----------------------------\n";
            cout << "DATA karyawan ke : " << i << endl;
            cout << "NIP              : " << bantu->Kontainer.npm << endl;
            cout << "Nama karyawan    : " << bantu->Kontainer.nama_mhs << endl;
            cout << "Gaji             : " << bantu->Kontainer.nilai << endl;

            bantu = bantu->next;
            i++;
        }
        cout << "-----------------------------\n";
    } else {
        cout << "Queue Kosong\n";
    }
}

int main() {
    queue Q;
    buatQkosong(&Q);
	cout << "============================\n";
    CetakQueue(Q);
    cout << endl;

    cout << "============================\n";

    add("71286387163", "p", 150000, &Q);
    add("12369131232", "f", 150000, &Q);
    add("71239781239", "r", 150000, &Q);
    add("23Y17982371", "G", 150000, &Q);
    add("12793812749", "T", 150000, &Q);
    add("812U7498124", "RRA", 150000, &Q);
    add("81274981724", "ADW", 150000, &Q);

    CetakQueue(Q);

    cout << "============================\n\n";

    del(&Q);
    del(&Q);
    CetakQueue(Q);

    cout << "============================\n";

    return 0;
}