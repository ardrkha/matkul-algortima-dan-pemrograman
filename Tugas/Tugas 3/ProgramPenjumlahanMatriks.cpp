#include<iostream>
using namespace std;

main()
{
	cout << "Program Penjumlahan 2 Matriks Berukuran NxM\n";
	cout << "-------------------------------------------------------------------\n";
	
	string nama, nim;
	cout << "Masukkan Nama :"; cin >> nama;
	cout << "Masukkan NIM :"; cin >> nim;
	cout << "-------------------------------------------------------------------\n";
	
	string matriksN = nim.substr(nim.length()-2,2);
    string matriksM = nim.substr(nim.length()-4,2);
    int barisMatriksN, barisMatriksM, kolomMatriksN, kolomMatriksM;
	cout << "Masukkan Ukuran Baris dan Kolom Matriks (Harus Berukuran Sama) : \n";

    cout << "Baris matriks " << matriksN << " : "; cin >> barisMatriksN;
    cout << "Kolom matriks " << matriksN << " : "; cin >> kolomMatriksN;
    cout << "Baris matriks " << matriksM << " : "; cin >> barisMatriksM;
    cout << "Kolom matriks " << matriksM << " : "; cin >> kolomMatriksM;
    cout << "-------------------------------------------------------------------\n";
    
    int matriks1[barisMatriksN][kolomMatriksN];
    int matriks2[barisMatriksM][kolomMatriksM];
    int hasil[barisMatriksN][kolomMatriksN];

    cout << "Masukkan Komponen Matriks " << matriksN << endl;

    for (int i = 0; i < barisMatriksN; i++){
        for (int j = 0; j < kolomMatriksN; j++){
            cout << "Matriks " << matriksN << "[" << i << "][" << j << "] : ";
            cin >> matriks1[i][j];
        }  
    }

    cout << "Masukkan Komponen Matriks " << matriksM << endl;


    for (int i = 0; i < barisMatriksM; i++){
        for (int j = 0; j < kolomMatriksM; j++){
            cout << "Matriks " << matriksM << "[" << i << "][" << j << "] : ";
            cin >> matriks2[i][j];
        }  
    }

    cout << "-------------------------------------------------------------------\n";
    cout << "Matriks " << matriksN << " : " << endl;
    for (int i = 0; i < barisMatriksN; i++){
        for (int j = 0; j < kolomMatriksN; j++){
            cout << matriks1[i][j] << "\t";
        }  
        cout << endl;
    }

    cout << endl << "Matriks " << matriksM << " : " << endl;
    for (int i = 0; i < barisMatriksM; i++){
        for (int j = 0; j < kolomMatriksM; j++){
            cout << matriks2[i][j] << "\t";
        }  
        cout << endl;
    }

    cout << "-------------------------------------------------------------------\n";

    for (int i = 0; i < barisMatriksN; i++){
        for (int j = 0; j < kolomMatriksN; j++){
            hasil[i][j] = matriks1[i][j] + matriks2[i][j];
        }  
    }

    cout << "Hasil Penjumlahan Antara Matriks " << matriksN << " dan Matriks " << matriksM << endl;
    cout << "Matriks " << nama << " : " << endl;
    for (int i = 0; i < barisMatriksN; i++){
        for (int j = 0; j < kolomMatriksN; j++){
            cout << hasil[i][j] << "\t";
        }  
        cout << endl;
    }

    cout << "-------------------------------------------------------------------\n";

    return 0;
	
	
}
