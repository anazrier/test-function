#include <iostream>
#include <cstdlib>
#include "menu.h"
#include "luas.h"
#include "volume.h"

using namespace std;

int main() {
    intro ();

    int PilihMenu, PilihBangun;
    char ulang;
    float v1, v2, v3, hasilLuas, hasilVolume;
    // double s, p, l, a, b, t, r, d1, d2;
    double hasilhitung = 0;

    do {
        MenuUtama();
        cout << "Pilih Menu (1-3) : ";
        cin >> PilihMenu;

        switch (PilihMenu){
            case 1 :
                system ("cls");
                MenuLuas();
                cout << "Pilih Bangun Datar (1-8) : ";
                cin >> PilihBangun;

                    switch (PilihBangun){
                        case 1 :
                            system("cls");
                            cout << "Masukkan sisi: "; cin >> v1;
                            HitungPersegi(v1);
                            break;
                        case 2 :
                            system("cls");
                            cout << "Masukkan panjang: "; cin >> v1;
                            cout << "Masukkan lebar: "; cin >> v2;
                            HitungPersegiPanjang(v1, v2);
                            break;
                        case 3 : 
                            system("cls");
                            cout << "Masukkan alas: "; cin >> v1;
                            cout << "Masukkan tinggi: "; cin >> v2;
                            HitungSegitiga(v1, v2);
                            break;
                        case 4 :
                            system("cls");
                            cout << "Masukkan alas: "; cin >> v1;
                            cout << "Masukkan tinggi: "; cin >> v2;
                            HitungJajarGenjang(v1, v2);
                            break;
                        case 5 :
                            system("cls");
                            cout << "Masukkan jari-jari: "; cin >> v1;
                            HitungLingkaran(v1); 
                            cout << ">> Luas Lingkaran: " << hasilLuas << endl;
                            break;
                        case 6 :
                            system("cls");
                            cout << "Masukkan diagonal 1: "; cin >> v1;
                            cout << "Masukkan diagonal 2: "; cin >> v2;
                            HitungBelahKetupat(v1, v2);
                            cout << ">> Luas Belah Ketupat: " << hasilLuas << endl;
                            break;
                        case 7 :
                            system("cls");
                            cout << "Masukkan diagonal 1: "; cin >> v1;
                            cout << "Masukkan diagonal 2: "; cin >> v2;
                            HitungLayangLayang(v1, v2);
                            cout << ">> Luas Layang-layang: " << hasilLuas << endl;
                            break;
                        case 8 : 
                            system("cls");
                            cout << "Masukkan sisi atas: "; cin >> v1;
                            cout << "Masukkan sisi bawah: "; cin >> v2;
                            cout << "Masukkan tinggi: "; cin >> v3;
                            HitungTrapesium(v1, v2, v3);
                            cout << ">> Luas Trapesium: " << hasilLuas << endl;
                            break;
                        default : 
                            cout << "Pilihan Tidak Sesuai!" << endl;
                    } break;
            case 2 :
                system("cls");
                MenuVolume();
                cout << "Pilih Bangun Ruang (1-4) : ";
                cin >> PilihBangun;

                    switch(PilihBangun){
                        case 1 :
                            system("cls");
                            cout << "Masukkan sisi: ";
                            cin >> v1;
                            hasilVolume = VolKubus(v1); 
                            cout << ">> Volume Kubus = " << hasilVolume << endl;
                            break;
                        case 2 :
                            system("cls");
                            cout << "Masukkan panjang: ";
                            cin >> v1;
                            cout << "Masukkan lebar: ";
                            cin >> v2;
                            cout << "Masukkan tinggi: ";
                            cin >> v3;
                            hasilVolume = VolBalok(v1, v2, v3); 
                            cout << ">> Volume Balok = " << hasilVolume << endl;
                            break;
                        case 3 :
                            system("cls");
                            cout << "Masukkan jari-jari: ";
                            cin >> v1;
                            cout << "Masukkan tinggi: ";
                            cin >> v2;
                            hasilVolume = HitungVolTabung(v1, v2); 
                            cout << ">> Volume Tabung = " << hasilVolume << endl;
                            break;
                        case 4 :
                            system("cls");
                            cout << "Masukkan jari-jari: ";
                            cin >> v1;
                            hasilVolume = HitungVolBola(v1); 
                            cout << ">> Volume Bola = " << hasilVolume << endl;
                            break;
                        default :
                            cout << "Pilihan Tidak Tersedia!" << endl;
                    } break;
            case 3 :
                system("cls");

                cout << "==================================================" << endl;
                cout << "   TERIMAKASIH SUDAH MENGGUNAKAN PROGRAM INI.   " << endl;
                cout << "==================================================" << endl;

                cout << "\nTekan tombol [ENTER] untuk menutup program...";
                cin.ignore(); 
                cin.get();

                system("cls");
                return 0;
            default :
                cout << "Menu Tidak Tersedia!" << endl;
        }

        cout << "\nApakah ingin menghitung kembali? (y/n) : ";
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'Y');

    system("cls");

    cout << "==================================================" << endl;
    cout << "   TERIMAKASIH SUDAH MENGGUNAKAN PROGRAM INI.   " << endl;
    cout << "==================================================" << endl;

    cout << "\nTekan tombol [ENTER] untuk menutup program...";
    cin.ignore(); 
    cin.get();

    system("cls");


    return 0;
}
