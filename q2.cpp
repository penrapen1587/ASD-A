#include <stdio.h>
#include <iostream>
#include <stdlib.h>   
#include <string.h>
using namespace std;

void BUAT_SIMPUL(int X);
void AWAL();
void CETAK();
void INSERTKANAN();

struct Node {        
    int INFO;
    struct Node *LINK;
};

typedef struct Node Simpul;

Simpul *P, *FIRST, *LAST, *Q; 
int X;

int main() {
    int A[7] = {1,2,3,4,5,6,7}; 
    int I;

    FIRST = NULL;   
    I = 0;
    X = A[I];
    BUAT_SIMPUL(X);
    AWAL();     

    for(I = 1; I <= 6; I++) {   
        X = A[I];               
        BUAT_SIMPUL(X);
        INSERTKANAN();
    }

    cout << "ANTRIAN AWAL: ";
    CETAK();
	cout <<endl;
	cout << " masukan jumlah yang baru datang "; cin >> X;
	
    BUAT_SIMPUL(X);
    INSERTKANAN();  

    cout << endl;
    cout << "ANTRIAN BARU MASUK ";
    CETAK();
    cout << endl;

    cin.get();
}

void BUAT_SIMPUL(int X)  
{
    P = (Simpul*) malloc(sizeof(Simpul));
    if(P != NULL) {
        P->INFO = X;
    } else {
        cout << "Pembuatan Simpul Tidak Berhasil" << endl;
        cin.get();
        exit(1);
    }
}

void AWAL()   
{
    FIRST = P;
    LAST = P;
    P->LINK = NULL;
}

void INSERTKANAN()   
{
    LAST->LINK = P;
    LAST = P;
    P->LINK = NULL;
}

void CETAK()  
{
    int X;
    Q = FIRST;
    while(Q != NULL) {
        X = Q->INFO;
        cout << " " << X;
        Q = Q->LINK;
    }
}