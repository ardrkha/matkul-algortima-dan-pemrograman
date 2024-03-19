#include <iostream>
using namespace std;

int main()
{
    // input
    string keterangan[4] = {"Nomor", "Jenis Kendaraan", "Jumlah", "Total Pemasukan"};
    string judul = "Pemasukan Biro Jasa Parkir Kendaraan Dalam Sebulan";
    string kendaraan[3] = {"Sepeda Motor", "Mobil", "Truk"};
    int jumlah_kendaraan[3] = {120, 85, 25};
    int jumlah_total = 0;

    // proses
    for (int i = 0; i < judul.length() + 20; i++)
    {
        cout << "=";
    }
    cout << "\n";
    for (int i = 0; i < 10; i++)
    {
        cout << " ";
    }

    cout << judul;
    for (int i = 0; i < 10; i++)
    {
        cout << " ";
    }
    cout << "\n";
    for (int i = 0; i < judul.length() + 20; i++)
    {
        cout << "=";
    }
    cout << "\n";

    for (int i = 0; i < sizeof(keterangan) / sizeof(keterangan[0]); i++)
    {
        cout << "   " << keterangan[i];
        for (int i = 0; i < 5; i++)
        {
            cout << " ";
        }
    }
    cout << "\n";

    for (int i = 0; i < judul.length() + 20; i++)
    {
        cout << "=";
    }
    cout << "\n";

    for (int i = 0; i < sizeof(kendaraan) / sizeof(kendaraan[0]); i++)
    {
        cout << "   " << i + 1;
        for (int i = 0; i < 15; i++)
        {
            cout << " ";
        }
        cout << kendaraan[i];
        for (int i = 0; i < 15; i++)
        {
            cout << " ";
        }
        cout << jumlah_kendaraan[i];
        for (int i = 0; i < 15; i++)
        {
            cout << " ";
        }
        if (kendaraan[i] == "Sepeda Motor")
        {
            int hasil = jumlah_kendaraan[i] * 1000;
            cout << "Rp" << hasil;
            jumlah_total += hasil;
        }
        else if (kendaraan[i] == "Mobil")
        {
            int hasil = jumlah_kendaraan[i] * 5000;
            cout << "Rp" << hasil;
            jumlah_total += hasil;
        }
        else if (kendaraan[i] == "Truk")
        {
            int hasil = jumlah_kendaraan[i] * 10000;
            cout << "Rp" << hasil;
            jumlah_total += hasil;
        }
        cout << "\n";
    }
    for (int i = 0; i < judul.length() + 20; i++)
    {
        cout << "=";
    }
    cout << "\n";
    for (int i = 0; i < 40; i++)
    {
        cout << " ";
    }

    cout << "Jumlah Total = Rp" << jumlah_total;
    return 0;
}
