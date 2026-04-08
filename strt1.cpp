#include <iostream>
#include <string>
using namespace std;

struct Koordinat {
	int x;
	int y;	
};

void Tampil_Posisi(Koordinat Posisi);

int main (){
	Koordinat Posisi;
	Posisi.x = 52;
	Posisi.y = 32;
	
	cout<<endl;
	Tampil_Posisi(Posisi);
	cin.get();
}

void Tampil_Posisi(Koordinat Posisi){
	cout<< " Posisi x = " << Posisi.x << endl;
	cout<< " Posisi y = " << Posisi.y << endl;
}