#include<string.h>
#include<iostream>
using namespace std;
int data[5] ={98,97,75,84,65};
int data2[5] ={98,97,75,84,65};

void tukar(int a, int b)
{
    int t;
    t = data[b];
    data[b] = data[a];
    data[a] = t;
}

void Tampil()
{
    for(int i=0;i<;i++)
    {
        cout<<data[i]<<" ";
    }
    cout<<endl;
}
void bubble_sort()
{
    for(int i=1;i<5;i++)
    {
        for(int j=5-1;j>=i;j--)
        {
            if(data[j]>data[j-1]) tukar(j,j-1);
        }
        Tampil();
    }
    cout<<endl;
}
int main()
{
    cout<<"* Selamat datang di aplikasi *"<<endl;
    cout<<"* Bubble Sort *"<<endl;
	cout<< " data sebelum diurutkan" <<endl;
	Tampil();
    cout<<"*----------------------------*"<<endl;
    cout<<"Proses Bubble Sort......."<<endl;
    cout<<"-------------------------"<<endl;
    Tampil();
    bubble_sort();
    cout<<"-------------------------"<<endl;
    cout<<" TERIMA KASIH "<<endl;
    cout<<"-------------------------"<<endl;
    cin.get();
    return 0;
}