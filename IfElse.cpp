#include<iostream>
using namespace std;

main()
{
	string musim;
	cout << "Musim : "; cin >> musim;
	if (musim == "kemarau")
	{
		cout << "Produksi Musim Kemarau : Es Teh";
	}
	else if (musim == "hujan")
	{
		cout << "Produksi Musim Hujan : Payung";
	}
	else
	{
		cout << "error";
	}
}
