#include <iostream>
#include <math.h>
using namespace std;

int main()
{
cout<<"Nama : Hardatama Rakha Ugraha" <<endl;
cout<<"NIM : 24040121130068" <<endl <<endl;  
cout<<"Menghitung Luas Lingkaran" <<endl;

	float jari, luas;
		cout<<"Masukkan jari-jari lingkaran (m) : "; cin >> jari;
		luas = M_PI * jari * jari;
		cout<<"Luas lingkaran adalah " << luas << " m^2";
}
