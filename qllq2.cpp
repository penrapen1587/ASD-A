
#include <iostream>
#include <string>
using namespace std;

typedef struct {
    string kode;
    string nama;
    int stock;
} DATA;

typedef struct elm *alamatelm;

typedef struct elm {
    DATA Kontainer;
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

void add(string kode, string nama, int stock, queue *Q) {
    elemen *info;
    info = new elemen;

    info->Kontainer.kode = kode;
    info->Kontainer.nama = nama;
    info->Kontainer.stock = stock;
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
            cout << "DATA BARANG  ke : " << i << endl;
            cout << "KODE            : " << bantu->Kontainer.kode << endl;
            cout << "Nama BARANG     :" << bantu->Kontainer.nama << endl;
            cout << "jumlah stok     :" << bantu->Kontainer.stock << endl;

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

    add("312313", "pdaoawhd", 12, &Q);
    add("231323", "fiudawda", 14, &Q);
    add("222222", "ruid", 1, &Q);
    add("333334", "Giuadhwi", 41, &Q);
    add("333333", "hadwiua", 24, &Q);

    CetakQueue(Q);

    cout << "============================\n\n";

    del(&Q);
    del(&Q);
    CetakQueue(Q);

    cout << "============================\n";

    return 0;
}