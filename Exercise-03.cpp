/*	Nama program	: Exercise-03
	Nama			: Alfari Sidnan Ghilmana
	NPM				: 140810180011
	Tanggal buat	: 26 02 2019
	Deskripsi		: Swap
********************************************************************/
#include<iostream>
using namespace std;

void swap(int& x,int& y)//fungsi untuk men swap
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main()
{
    int x,y;
    cout<<"x = ";cin>>x;
    cout<<"y = ";cin>>y;
    swap(x,y);
    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y;
}