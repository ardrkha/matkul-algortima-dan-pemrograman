#include<iostream>
using namespace std;

main()
{
	cout << "Program Menghitung Suhu Rata-Rata\n";
	cout << "----------------------------------\n";
	
	int n;
	cout << "Masukkan Banyaknya Suhu : "; cin >> n;
	cout << "----------------------------------\n";
	
	double suhu[n], total=0;
	for(int i=1;i<=n;i+=1)
	{
		
		cout << "Masukkan Suhu ke - " << i << " : "; cin >> suhu[i];
		total=total+suhu[i];
	}
	cout << "----------------------------------\n";
	cout << "Rata - rata suhu : " << total/n << endl;
}


