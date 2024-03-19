#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

main()
{
	cout<<"contoh program if"<<endl;
	
	int nilaid;
	cout <<"Nilai D ="; cin>>nilaid;
	
	if (nilaid =="0")
	{
		cout<<"Nilai x1 = x2";
	}
	else if (nilaid>0)
	{
		cout<<"Nilai x1 dan x2 adalah bilangan real";
	}
	else if (nilaid<0)
	{
		cout<<"Nilai x1 dan x2 adaah bilangan imajiner";
	}
	else
	{
		cout << "Input yang anda masukan tidak tersedia";
	}
	
}
