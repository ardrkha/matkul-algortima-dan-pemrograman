#include <iostream>
#include <math.h>
using namespace std;


//ini prosedur. (tanpa paramter)
//fungsi ada parameter
void persegi(float sisi)
{
	cout<<"Menghitung Luas Bujur Sangkar" <<endl;

	float sisi, luas;
		cout<<"Masukkan panjang sisi bujur sangkar (m) : "; cin >> sisi;
		luas = sisi * sisi;
		cout<<"Luas bujur sangkar adalah " << luas << " m^2\n\n";
}

void lingkaran()
{
	cout<<"Menghitung Luas Lingkaran" <<endl;

	float jari, luas;
		cout<<"Masukkan jari-jari lingkaran (m) : "; cin >> jari;
		luas = M_PI * jari * jari;
		cout<<"Luas lingkaran adalah " << luas << " m^2";
}

int main()
 {
 	persegi(5);
 	lingkaran();
 }
 
 //pr
