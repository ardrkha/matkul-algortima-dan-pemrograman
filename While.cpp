#include <iostream>
using namespace std;

int main()
{
	string ulangi = "iya"; //nilai benar
	int i = 0; //perulangan awal
	
	//perulangan while
	while(ulangi == "iya") // ketika nilainya benar maka diulangi, nilai i akan bertambah
	{
		
		
		//increment i 
		i++; //artinya menambah nilai i
	}
	printf("\n\n-------\n"); //ketika nilainya sudah salah
	printf("Perulangan Selesai!\n");
	printf("Kamu mengulang sebanyak %i kali.\n", i);
	return 0;
}


//string = untuk huruf/angka yg lebih dari 1 karakter. contoh = benar, 9000 >> pakai " ... "
//char = untuk huruf/angka yg hanya memiliki 1 karaketr. contoh = y, n, a, 9, 5 >> pakai ' ...'
