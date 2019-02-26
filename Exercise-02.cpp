/*	Nama program	: Exercise-02
	Nama			: Alfari Sidnan Ghilmana
	NPM				: 140810180011
	Tanggal buat	: 26 02 2019
	Deskripsi		: konversi celsius ke farenheit
********************************************************************/
#include<iostream>
using namespace std;

void celsiustofarenheit(float celsius,float& farenheit)
{
    farenheit = (1.8 * celsius)+32; //rumus celsius ke farenheit
}
int main()
{
	float celsius,farenheit;
    cout<<"Masukkan derajat celsius : "; cin>>celsius;
    celsiustofarenheit(celsius,farenheit);
    cout<<"Farenheit : "<<farenheit;
}
