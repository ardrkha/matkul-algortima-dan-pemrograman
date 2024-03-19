#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int bangundatar;
	cout<<"Nama : Hardatama Rakha Ugraha" <<endl;
	cout<<"NIM : 24040121130068" <<endl <<endl;  
	cout << "Pilih Jenis Bangun Datar" <<endl;
	cout << "1. Bujur Sangkar" <<endl;
    cout << "2. Empat Persegi Panjang" <<endl;
    cout << "3. Lingkaran" <<endl;
    cout << "4. Segitiga" <<endl;
    cout << "Pilih Nomor Bangun Datar : "; cin>> bangundatar;
    
    switch (bangundatar)
    {
    	case 1:
    		float sisi, luas1;
			cout<<"Masukkan panjang sisi bujur sangkar (m) : "; cin >> sisi;
			luas1 = sisi * sisi;
			cout<<"Luas bujur sangkar adalah " << luas1 << " m^2";
			break;
			
		case 2:
			float panjang, lebar, luas2;
			cout<<"Masukkan panjang persegi panjang (m) : "; cin >> panjang;
			cout<<"Masukkan lebar persegi panjang (m) : "; cin >> lebar;
			luas2 = 4 * panjang * lebar;
			cout<<"Luas empat persegi panjang adalah " << luas2 << " m^2";
			break;
			
		case 3:
			float jari, luas3;
			cout<<"Masukkan jari-jari lingkaran (m) : "; cin >> jari;
			luas3 = M_PI * jari * jari;
			cout<<"Luas lingkaran adalah " << luas3 << " m^2";
			break;
			
		case 4:
			float alas, tinggi, luas4;
			cout<<"Masukkan alas segitiga (m) : "; cin >> alas;
			cout<<"Masukkan tinggi segitiga (m) : "; cin >> tinggi;
			luas4 = alas * tinggi / 2;
			cout<<"Luas segitiga adalah " << luas4 << " m^2";
			break;
			
		default:
			cout << "Error";
			break;
	}
}
