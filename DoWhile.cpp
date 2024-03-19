#include <iostream>
using namespace std;

int main()
{
	string ulangi = "iya"; //nilai benar

	
	
	//perulangan do/while
	do
	{
			int i = 0; //perulangan awal
		float sisi, luas;
		cout<<"Masukkan panjang sisi bujur sangkar (m) : "; cin >> sisi;
		luas = sisi * sisi;
		cout<<"Luas bujur sangkar adalah " << luas << " m^2\n\n";
		
		printf("Apakah kamu mau menghitung luas bujur sangkar?\n");
		printf("Jawab (iya/tidak): ");
		cin >> ulangi; 
		
		//increment i 
		i++; //artinya menambah nilai i
		
	}
	
	while(ulangi == "iya"); // ketika nilainya benar maka diulangi ke atas, nilai i akan bertambah
	
	
	printf("\n\n-------\n"); //ketika nilainya sudah salah
	printf("Perulangan Selesai!\n");
	printf("Kamu mengulang sebanyak %i kali.\n", i);
	return 0;
}


//string = untuk huruf/angka yg lebih dari 1 karakter. contoh = benar, 9000 >> pakai " ... "
//char = untuk huruf/angka yg hanya memiliki 1 karaketr. contoh = y, n, a, 9, 5 >> pakai ' ...'
//float = bilangan pecahan. contoh = 0.231
