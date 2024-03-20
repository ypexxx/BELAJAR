#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

void header() {
    cout << "====================\n";
    cout << "      ATM YPEX     \n";
    cout << "   PECAHAN 50.000   \n";
    cout << "====================\n";
}

void transaksi() {
    int pilihan, saldo=200000;
    menu :
    cout << "====================" << endl;
    cout << "Pilih transaksi :  \n";
    cout << "1. Tarik tunai" << endl;
    cout << "2. Setor Tunai" << endl;
    cout << "3. Cek saldo" << endl;
    cout << "Masukkan pilihan: ";
    cin >> pilihan;
    system("cls");
        switch(pilihan) {
            case 1:
                penarikan :
                int pil;
                header();
                cout << "==============================" << endl;
                cout << "    Pilih jumlah penarikan    " << endl;
                cout << "==============================" << endl;
                cout << "1. <--Rp 50.000            Rp200.000--> 3." << endl;
                cout << "2. <--Rp 100.000        nominal lain--> 4." << endl;
                cout << "Masukkan pilihan: ";
                cin >> pil;
                    if(pil == 1) {
                        if(saldo >= 50000) {
                            saldo -= 50000;
                            cout << "Penarikan berhasil." << endl;
                        } else {
                            cout << "Saldo anda kurang." << endl;
                            system("pause");
                            system("cls");
                            goto penarikan;
                        }
                    }
                    else if(pil == 2) {
                        if(saldo >=150000) {
                            saldo -= 100000;
                            cout << "Penarikan berhasil." << endl;
                        } else {
                            cout << "Saldo anda kurang" << endl;
                            system("pause");
                            system("cls");
                            goto penarikan;
                        }
            
                    }
                    else if(pil == 3) {
                        if(saldo >= 250000) {
                            saldo -= 200000;
                            cout << "Penarikan berhasil.";
                        } else {
                            cout << "Saldo anda kurang";
                            system("pause");
                            system("cls");
                            goto penarikan;
                        }
                    }
                    else if(pil == 4){
                        while(int i=0<1) {
                            int x;
                            cout << "Masukkan nominal yang akan ditarik: ";
                            cin >> x;
                            if((saldo>=x)&&(x%50000==0)) {
                                saldo -= x;
                                cout << "Penarikan berhasil";
                                break;
                            }
                            else if(saldo < x) {
                                cout << "Saldo anda kurang";
                            }
                            else {
                                cout << "Penarikan harus kelipatan Rp50.000";
                            }
                            break;
                        }
                    }
            case 2 :
                header();
                while(int i=0<1) {
                    int y;
                    cout << "Masukkan jumlah uang yang akan disetor: ";
                    cin >> y;
                        if(y%50000==0) {
                            saldo += y;
                            cout << "Setor tunai berhasil";
                            break;
                        }
                        else {
                            cout << "Setor tunai harus kelipatan Rp50.000";
                            break;
                        }
                }
            case 3 :
                header();
                cout << "Saldo anda adalah: " << saldo << endl;
                break;    
        }

    char lanjut;
    cout << "Apakah anda ingin transaksi lagi?" << endl;
    cout << "tekan (y) untuk melanjutkan transaksi: ";
    cin >> lanjut;
        if(lanjut == 'y') {
            system("cls");
            goto menu;
        }
        else {
            system("cls");
            cout << "=======================================" << endl;
            cout << "   Terima kasih atas kunjungan anda    " << endl;
            cout << "=======================================" << endl;
        }
}

int main() {
    system("color 1f");
    int password, i=0;
    header();

    while(i<3) {
        cout << "Masukkan password: ";
        cin >> password;
            if(password == 101010) {
                cout << "Login berhasil" << endl;
                system("cls");
                transaksi();
                break;
            } else if(i<2) {
                system("cls");
                header();
                cout << "Password salah coba lagi." << endl;
            } else {
                system("cls");
                cout << "Rekening anda diblokir.";
            } i++;
    }
}