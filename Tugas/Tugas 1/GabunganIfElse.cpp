#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	string bangundatar;
	cout<<"Nama : Hardatama Rakha Ugraha" <<endl;
	cout<<"NIM : 24040121130068" <<endl <<endl;  
	cout << "Pilih Jenis Bangun Datar" <<endl;
	cout << "1. Bujur Sangkar" <<endl;
    cout << "2. Empat Persegi Panjang" <<endl;
    cout << "3. Lingkaran" <<endl;
    cout << "4. Segitiga" <<endl;
    cout << "Pilih Nomor Bangun Datar : "; cin>> bangundatar;
    
    if (bangundatar == "1")
    {
    	float sisi, luas;
		cout<<"Masukkan panjang sisi bujur sangkar (m) : "; cin >> sisi;
		luas = sisi * sisi;
		cout<<"Luas bujur sangkar adalah " << luas << " m^2";
	}
	else if (bangundatar == "2")
	{
		float panjang, lebar, luas;
		cout<<"Masukkan panjang persegi panjang (m) : "; cin >> panjang;
		cout<<"Masukkan lebar persegi panjang (m) : "; cin >> lebar;
		luas = 4 * panjang * lebar;
		cout<<"Luas empat persegi panjang adalah " << luas << " m^2";
	}
	else if (bangundatar == "3")
	{
		float jari, luas;
		cout<<"Masukkan jari-jari lingkaran (m) : "; cin >> jari;
		luas = M_PI * jari * jari;
		cout<<"Luas lingkaran adalah " << luas << " m^2";
	}
	else if (bangundatar == "4")
	{
		float alas, tinggi, luas;
		cout<<"Masukkan alas segitiga (m) : "; cin >> alas;
		cout<<"Masukkan tinggi segitiga (m) : "; cin >> tinggi;
		luas = alas * tinggi / 2;
		cout<<"Luas segitiga adalah " << luas << " m^2";
	}
	else
	{
		cout << "Error";
	}
}




