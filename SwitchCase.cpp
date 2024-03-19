
#include<iostream>
using namespace std;

int main()
{
	int nilaid;
	cout <<"masukkan Nilai D =";cin>>nilaid;
	switch (nilaid)
	{
		case 0:
			cout <<"Nilai x1 = x2";
			break;
			
		case -1:
			cout <<"Nilai x1 dan x2 adalah bilangan real";
			break;
		
		case 1:
			cout <<"Nilai x1 dan x2 adalah bilangan imajiner";
			break;
			
		default:
			cout <<"error";
			break;
	}
	return 0;
}
