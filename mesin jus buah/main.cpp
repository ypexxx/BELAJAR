#include "penyimpanUang.h"
#include "tipeDispenser.h"

#include <iostream>
using namespace std;

void tampilPilihan()
{
    cout << "=== Selamat Datang di Kantin TASIFA ===" << endl;
    cout << "=== Untuk memilih item, masukkan : ====" << endl;
    cout << "1. untuk jus apel" << endl;
    cout << "2. untuk jus jeruk" << endl;
    cout << "3. untuk jus mangga" << endl;
    cout << "4. untuk jus anggur" << endl;
    cout << "9. untuk keluar" << endl;
}

void jualProduk(tipeDispenser &produk, penyimpanUang &pKounter)
{
    int jumlah;
    int jumlah2;

    if (produk.getJumlahItem() > 0)
    {
            cout << "Masukkan uang anda " << produk.getBiaya() << " rupiah" << endl;
            cout << "Masukkan uang anda disini" << endl;
            cin >> jumlah;
        
        if (jumlah < produk.getBiaya())
        {
            cout << "Silakan masukkan uang tambahan " << produk.getBiaya() - jumlah << " rupiah" << endl;
            cin >> jumlah2;
            jumlah = jumlah + jumlah2;
        }
        if (jumlah >= produk.getBiaya())
        {
            pKounter.terimaUang(jumlah);
            produk.lakukanPenjualan();
            cout << "Silakan ambil item anda dan selamat menikmati" << endl;
            cout << "=-=-=-=-=-=-=-=-=-=-=-=-" << endl << endl;
        }
        else
        {
            cout << "Uang yang diserahkan tidak cukup. " << "Silakan ambil kembali uang anda." << endl;
            cout << "=-=-=-=-=-=-=-=-=-=-=-=-" << endl << endl;
        }
    }
    else
    {
        cout << "Maaf, item ini telah habis terjual." << endl;
    }
}

int main()
{
    penyimpanUang kounter;
    tipeDispenser jusApel(100, 50);
    tipeDispenser jusJeruk(100, 65);
    tipeDispenser jusMangga(75, 45);
    tipeDispenser jusAnggur(100, 85);

    int pilihan;

    tampilPilihan();
    cout << "Masukkan pilihan anda : " << endl;
    cin >> pilihan;

    do
    {
        switch (pilihan)
        {
            case 1:
                cout << "Anda memilih jus apel" << endl;
                jualProduk(jusApel, kounter);
                break;
            case 2:
                jualProduk(jusJeruk, kounter);
                break;
            case 3:
                jualProduk(jusMangga, kounter);
                break;
            case 4:
                jualProduk(jusAnggur, kounter);
                break;
            
            default:
                cout << "Pilihan tak valid." << endl;   
            tampilPilihan();
            cin >> pilihan;
        } 
        return 0; 
    } while(pilihan !=9);
}