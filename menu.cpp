#include <iostream>
#include <cstdlib>
#include "menu.h"

using namespace std;

void intro() {
    system("cls");
    
    cout << endl;
    cout << "\t==========================================================" << endl;
    cout << "\t|                                                        |" << endl;
    cout << "\t|               PROGRAM GEOMETRI PROSEDURE               |" << endl;
    cout << "\t|                TUGAS KELOMPOK ALGORITMA                |" << endl;
    cout << "\t|                                                        |" << endl;
    cout << "\t==========================================================" << endl;
    cout << "\t|                    ANGGOTA KELOMPOK:                   |" << endl;
    cout << "\t|                                                        |" << endl;
    cout << "\t|  1. Zaqiah Khurul A'in Ramadhani  (125111000)          |" << endl;
    cout << "\t|  2. Sendy Ramadhan                (125111000)          |" << endl;
    cout << "\t|  3. Anazri Eriyani                (125111043)          |" << endl;
    cout << "\t|                                                        |" << endl;
    cout << "\t==========================================================" << endl;
    cout << endl;
    
    cout << "\n\t Tekan tombol [ENTER] untuk memulai...";
    
    cin.get();     
    system("cls"); 
}

void MenuUtama() {
    system("cls");
    cout << "===============================================" << endl;
    cout << "\n         PROGRAM PENGHITUNG GEOMETRI         " << endl;
    cout << endl;
    cout << "1. (2D) Menghitung Luas Bangun Datar" << endl;
    cout << "2. (3D) Menghitung Volume Bangun Ruang " << endl;
    cout << "3. Keluar" << endl;
    cout << endl;
    cout << "===============================================" << endl;
}

void MenuLuas() {
    cout << "-------- PILIHAN BANGUN DATAR --------" << endl;
    cout << endl;
    cout << "--- Parameter Input ---" << endl;
    cout << "1. Persegi" << endl;
    cout << "2. Persegi Panjang" << endl;
    cout << "3. Segitiga" << endl;
    cout << "4. Jajar Genjang" << endl;
    cout << endl;
    cout << "--- Parameter Input dan Output ---" << endl;
    cout << "5. Lingkaran" << endl;
    cout << "6. Belah Ketupat" << endl;
    cout << "7. Layang-layang" << endl;
    cout << "8. Trapesium" << endl;
}

void MenuVolume() {
    cout << "-------- PILIHAN BANGUN RUANG --------" << endl;
    cout << endl;
    cout << "--- Parameter Input ---" << endl;
    cout << "1. Kubus" << endl;
    cout << "2. Balok" << endl;
    cout << endl;
    cout << "--- Parameter Input dan Output ---" << endl;
    cout << "3. Tabung" << endl;
    cout << "4. Bola" << endl;
}