/*	Nama program	: Fizz buzz
	Nama			: Alfari Sidnan Ghilmana
	NPM				: 140810180011
	Tanggal buat	: 26 02 2019
	Deskripsi		: mencetak fizz buzz saat kondisi tertentu
********************************************************************/
#include<iostream>
using namespace std;

int i;
void fizz (int& i)//modular output fizz
{
    if(i%3==0)
    {
        cout<<"Fizz ";
    }
}
void buzz (int& i)//modular ouput buzz
{
    if(i%5==0)
    {
        cout<<"Buzz";
    }
}
int main()
{
    for(int i=1;i<=100;i++)//ouput fizz buzz dan angka 1-100
    {
    	
        fizz(i);
        buzz(i);
        if(i%3==0 || i%5==0)
        {
        	cout<<endl;
        	continue;
		}
        cout<<i<<endl;
    }
}
