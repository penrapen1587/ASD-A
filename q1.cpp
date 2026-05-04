#include <iostream>
using namespace std;

typedef struct{
	string npm;
	string nama;
	string nilai;
	
}DataBuku;

typedef struct elm *alamatelm;
typedef struct elm{
	DataBuku kontainer;
	alamatelm next;
	
}elemen;

typedef struct {
	elemen* top;
	
}stack;

void buatSTkosong (stack *s){
	(*s).top= NULL;
}
int iskosong (stack s){
	bool hasil = false;
	if (s.top == NULL){
		hasil = true;
	}
	return hasil;
}
int jmlelemen(stack s){
	int hasil=0;
	if (s.top != NULL){
		elemen *bantu;
		bantu = s.top;
		while (bantu !=NULL){
			hasil = hasil +1;
			bantu = bantu -> next;
		}
	}
return hasil;
}

void push(string npm, string nama,string nilai, stack *s) {
	elemen *info;
	info = new elemen;
	info -> kontainer.npm = npm;
	info -> kontainer.nama = nama;
	info -> kontainer.nilai = nilai;
	if ((*s).top == NULL){
		cout << " STACK PENUH "<<endl;
		info -> next = NULL;
	}
	else {
		info -> next = (*s).top;
	}
	(*s).top = info;
	info  = NULL;
}

void Pop(stack *s){
	if ((*s).top !=NULL){
		elemen *hapus = (*s).top;
		if (jmlelemen(*s)== 1){
			(*s).top = NULL;
		}
		else {
			(*s).top = (*s).top -> next;
		}
		hapus -> next = NULL;
		delete hapus;
	}
	else {
		cout << " STACK KOSONG "<< endl;
	}
}

void cetakstack (stack s){
	if (s.top != NULL){
		cout << " TUMPUKAN BUKU "<< endl;
		elemen *bantu = s.top;
		int i = 1;
		while (bantu != NULL){
			cout << "-------------------------------------"<<endl;
		cout << "Elemen ke :" << i << endl;
		cout << "kode  : " << bantu ->kontainer.npm<<endl;
		cout << "Judul : " << bantu ->kontainer.nama<<endl;
		cout << "pengarang: " << bantu ->kontainer.nilai<<endl;
		
		bantu = bantu -> next;
		i = i + 1;
		}
		cout << "-------------------------------------"<<endl; 
	}
	else {
		cout << " STACK KOSONG " <<endl;
	}
}

int main (){
	stack s;
	buatSTkosong(&s);
	cetakstack(s);
	cout <<endl;
	cout <<endl;
	cout << "-------------------------------------"<<endl; 
	push ("131414","air","usman", &s);
	push ("133121","api","sauman", &s);
	push ("314112","tanah","usman", &s);
	push ("413522","awan","raul", &s);
	push ("591792","api","rtpo", &s);
	
	cetakstack(s);
	cout << "====================="<<endl;
	cout <<endl;
	cout <<endl;
	Pop(&s);
	cetakstack(s);
	cout <<endl;
	cout <<endl;
	Pop(&s);
	cetakstack(s);
	cout << "====================="<<endl;
	return 0;
}