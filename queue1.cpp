#include <iostream>
#include <string>
using namespace std;


typedef struct {
	string npm;
	string nama;
	double nilai; 
} nilaimk;

typedef struct {
	int first;
	int last;
	nilaimk dat[10];
} queue;

void buatQUkosong (queue *q){
	(*q).first = -1;
	(*q).last = -1;
}

bool iskosong(queue q){
	bool hasil = false;
	if (q.last == -1){
		hasil = true;
	}
	return hasil;
}

bool ispenuh(queue q){
	bool hasil = false;
	if (q.last == 9){
		hasil = true;
	}
	return hasil;
}

void ADD(string npm, string nama, double nilai, queue *q){
	if(iskosong (*q)==1){
		(*q).first = 0;
		(*q).last = 0;
		(*q).dat[0].npm = npm;
		(*q).dat[0].nama = nama;
		(*q).dat[0].nilai = nilai;
	}
	else {
		if(ispenuh(*q)!=1){
		(*q).last =(*q).last +1 ;
		(*q).dat[(*q).last].npm = npm;
		(*q).dat[(*q).last].nama = nama;
		(*q).dat[(*q).last].nilai = nilai;
		}
		else {
			cout << " QUEUE PENUH " << endl;
		}
	}
}

void DEL(queue *q){
	if ((*q).last == 0){
		(*q).first = -1;
		(*q).last = -1;	
	}
	else {
		int i; 
		for (i=((*q).first + 1);i <= (*q).last;i++){
			(*q).dat[i-1].npm= (*q).dat[i].npm;
			(*q).dat[i-1].nama= (*q).dat[i].nama;
			(*q).dat[i-1].nilai= (*q).dat[i].nilai;
		}
		(*q).last = (*q).last -1;
	}
}

void cetakqueue (queue q){
	if(q.first != -1 ){
		cout << " TAMPILAKN " << endl;
		cout << endl;
		int i;
		for (i=q.last; i>=q.first; i--){
			cout << " elemen ke"  << i +1 << endl;
			cout << "NPM " << q.dat[i].npm << endl;
			cout << "nama  " <<q.dat[i].nama<< endl;
			cout << "NIlai " <<q.dat[i].nilai<< endl;
		}
			
	}
	else {
		cout << " Queue kosong " << endl;
		
	}
}

int main (){
	queue q;
	buatQUkosong(&q);
	cetakqueue(q);
	cout << endl;
	ADD("1413123","weqw",55.76,&q);
	ADD("1413123","awfa",55.76,&q);
	ADD("1413123","wewdawdqw",55.76,&q);
	ADD("1413123","wewdaqw",55.76,&q);
	cetakqueue(q);
	cout <<endl;
	cout <<endl;
	DEL(&q);
	cetakqueue(q);
	cout <<endl;
	cout <<endl;
	DEL(&q);
	cetakqueue(q);
	cout <<endl;
	cout <<endl;
	return 0;
}