#include <iostream>
using namespace std;

string judul;
void header()
{
    for (int i = 0; i < 25; i++)
    {
        cout << " ";
    }
    judul = "Nilai Praktikum Fisika Dasar";
    cout << judul;
    for (int i = 0; i < 25; i++)
    {
        cout << " ";
    }
    cout << "\n";

    for (int i = 0; i < 50 + judul.size(); i++)
    {
        cout << "-";
    }
    string nama = "Hardatama Rakha Ugraha";
    string NIM = "24040121130068";
    cout << "\nNama : " << nama;
    cout << "\nNIM : " << NIM << "\n";
    for (int i = 0; i < 50 + judul.size(); i++)
    {
        cout << "=";
    }
    cout << "\n";
    string keterangan[5] = {"Unit ke _", "Nilai Tes", "Nilai Praktikum", "Nilai Laporan", "Total Nilai"};
    for (int i = 0; i < sizeof(keterangan) / sizeof(string); i++)
    {
        cout << keterangan[i] << "   ";
    }
    cout << "\n";
}

void body()
{
    double nilai[8][3] = {
        {94, 82, 90},
        {75, 92, 86},
        {68, 75, 90},
        {90, 88, 75},
        {91, 80, 95},
        {81, 87, 90},
        {95, 97, 95},
        {85, 87, 76}};

    double total_nilai = 0;
    for (int i = 0; i < 8; i++)
    {
        cout << "   " << i + 1;
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            for (int i = 0; i < 14; i++)
            {
                cout << " ";
            }
            sum += nilai[i][j];
            cout << nilai[i][j];
        }
        for (int i = 0; i < 14; i++)
        {
            cout << " ";
        }
        double rata_rata = sum / (sizeof(nilai[i]) / sizeof(nilai[i][0]));
        cout << rata_rata;
        total_nilai += rata_rata;
        cout << "\n";
    }

    for (int i = 0; i < 45; i++)
    {
        cout << " ";
    }
    cout << "Nilai Akhir : " << total_nilai / (sizeof(nilai) / sizeof(nilai[0])) << "\n";
    for (int i = 0; i < 50 + judul.size(); i++)
    {
        cout << "=";
    }
}

int main()
{

    header();
    body();

    return 0;
}


