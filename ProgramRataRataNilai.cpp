#include<iostream>
using namespace std;

main()
{
	string nama;
	double nilai, jum=0;
	for(int i=1;i<11;i+=1)
	{
		cout << i; cout << ". Nama : "; cin >> nama; cout << "Nilai : "; cin >> nilai;
		jum = jum + nilai;
	}
	
	
	cout << "Rata - rata nilai : " << jum/10 << endl;
	return 0;
	
}
