#include<string.h>
#include<iostream>
using namespace std;

class sort {
public:
int data[10], data2[10];
int n;
}DT;
void tukar(int a, int b)
{
    int t;
    t = DT.data[b];
    DT.data[b] = DT.data[a];
    DT.data[a] = t;
}
void Input()
{
    cout<<"Masukkan jumlah data = ";cin>>DT.n;
    cout<<"--------"<< endl;
    for(int i=0;i<DT.n;i++)
    {
        cout<<"Masukkan data ke-"<<(i+1)<<" = ";cin>>DT.data[i];
        DT.data2[i] = DT.data[i];
    }
    cout<<endl;
}
void Tampil()
{
    for(int i=0;i<DT.n;i++)
    {
        cout<<DT.data[i]<<" ";
    }
    cout<<endl;
}
void bubble_sort()
{
    for(int i=1;i<DT.n;i++)
    {
        for(int j=DT.n-1;j>=i;j--)
        {
            if(DT.data[j]<DT.data[j-1]) tukar(j,j-1);
        }
        Tampil();
    }
    cout<<endl;
}
int main()
{
    cout<<"* Selamat datang di aplikasi *"<<endl;
    cout<<"* Bubble Sort *"<<endl;
    cout<<"*----------------------------*"<<endl;
    Input();
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