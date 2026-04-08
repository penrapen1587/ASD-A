#include<iostream>
#include <string>
using namespace std;

string stack[5];
int top = -1;


int main (){
	int a,b,pilih;
	cout << "input data " <<endl;
	cout << "hapus data " <<endl;
	cout << "keluar program" << endl;
	cout << " Pilih menu : "; cin >> pilih;
	do {
	switch(pilih){
		
	case 1:
	cout << "Masukan jumlah data yang ingin dimasukan (maks 5) : "; cin>> a;
	
	cout << "isi stack " << endl;
	for(int i = 0; i<a;i++){
		cout << "masukan data ke "<< i+1<< " "; cin >> stack[i];
		top++;
	}
	cout << endl;
	cout << "isi data " << endl;
	for(int i = top; i>=0;i--){
		cout << stack[i]<< endl;
	}
	cout << "masukan menu lagi "; cin >> pilih;
	break;
	
	case 2 :
	cout << "masukan Data ingin dikeluarkan "; cin >> b;
	for(int i = 0; i<b;i++){
		top--;
	}
	cout << endl;
	cout << "isi data " << endl;
	for(int i = top; i>=0;i--){
		cout << stack[i]<< endl;
	}
	cout << " masukan menu lagi "; cin >> pilih;
	break;
	
	case 3: 
	cout << " keluar program " << endl;
	default: 
	cout << " menu tidak ada " << endl;
	}
	}while (pilih != 3);
	

}