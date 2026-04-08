#include<iostream>
using namespace std;

int stack[5];
int top = -1;

int main (){
	top++;
	stack[top] = 4;
	top++;
	stack[top] = 16;
	cout << " isi stack " << endl;
	for(int i = top; i>=0;i--){
		cout << stack[i] << endl;
	}
	cout << " Data yang keluar " << stack[top] << endl;
	top--;
	
	cout << " isi stack setelah pop" << endl;
	for(int i = top; i>=0;i--){
		cout << stack[i]<< endl;
	}
	return 0;
}