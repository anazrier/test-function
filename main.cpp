#include <iostream>
#include "volume.h"
using namespace std;

int main()
{
    int pilihan;
    char ulang;
    float v1, v2, v3, hasilVolume;

    do
    {
        system("cls");

        cout << "======================================" << endl;
        cout << "     PROGRAM HITUNG VOLUME" << endl;
        cout << "======================================" << endl;
        cout << "1. Kubus" << endl;
        cout << "2. Balok" << endl;
        cout << "3. Tabung" << endl;
        cout << "4. Bola" << endl;
        cout << "======================================" << endl;
        cout << "Pilih bangun ruang (1-4): ";
        cin >> pilihan;
        cout << endl;

        switch (pilihan)
        {
        case 1:
            cout << "Masukkan sisi: ";
            cin >> v1;
            hasilVolume = VolKubus(v1); 
            cout << ">> Volume Kubus = " << hasilVolume << endl;
            break;

        case 2:
            cout << "Masukkan panjang: ";
            cin >> v1;
            cout << "Masukkan lebar: ";
            cin >> v2;
            cout << "Masukkan tinggi: ";
            cin >> v3;
            hasilVolume = VolBalok(v1, v2, v3); 
            cout << ">> Volume Balok = " << hasilVolume << endl;
            break;

        case 3:
            cout << "Masukkan jari-jari: ";
            cin >> v1;
            cout << "Masukkan tinggi: ";
            cin >> v2;
            hasilVolume = HitungVolTabung(v1, v2); 
            cout << ">> Volume Tabung = " << hasilVolume << endl;
            break;

        case 4:
            cout << "Masukkan jari-jari: ";
            cin >> v1;
            hasilVolume = HitungVolBola(v1); 
            cout << ">> Volume Bola = " << hasilVolume << endl;
            break;

        default:
            cout << "Pilihan tidak valid!" << endl;
        }

        cout << "\nApakah ingin menghitung lagi? (y/n): ";
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'Y');

    cout << "\nTerima kasih telah menggunakan program ini!" << endl;
    return 0;
}
