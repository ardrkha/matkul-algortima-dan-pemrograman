#include <iostream>
using namespace std;

int main(){
    // Membuat array kosong
    int nilai[5];

    // Memasukkan nilai ke dalam array
    for(int i = 1; i < 6; i++)
	{
        cout << "Masukkan nilai ke-" << i << ": ";
        cin >> nilai[i];
    }

	cout << "\n";

    // Mencetak isi array
    for(int i = 1; i < 6; i++)
	{
        cout << "Nilai ke-" << i << ": " << nilai[i] << endl;
    }

    return 0;
}
