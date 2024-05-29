#include <iostream>
using namespace std;

void tampilPilihan() {
    cout << "Silahkan masukkan operasi bilangan : " << endl;
    cout << "1. tambah" << endl;
    cout << "2. kurang" << endl;
    cout << "3. kali" << endl;
    cout << "4. bagi" << endl;
}

void tambah() {
    int bil1, bil2;
    int hasil_tambah;
    cout << "Masukkan bilangan 1 : " << endl;
    cin >> bil1;
    cout << "Masukkan bilangan 2 : " << endl;
    cin >> bil2;
    hasil_tambah = bil1 + bil2;
    cout << "Hasil tambah 2 bilangan adalah : " << hasil_tambah << endl << endl;
    return;
}

int kurang(int a, int b) {
    int hasil_kurang;
    return  hasil_kurang = a - b;
}

int main() {
    int bil1, bil2;
    start:
    tampilPilihan();
    
    int pilihan;
    cout << "Silahkan masukkan pilihan anda: ";
    cin >> pilihan;
    do {
        switch(pilihan) {
            case 1:
                tambah();
                break;
            case 2:
                cout << "Masukkan bilangan 1 : " << endl;
                cin >> bil1;
                cout << "Masukkan bilangan 2 : " << endl;
                cin >> bil2;
                cout << "Hasil kurang 2 bilangan adalah : " <<kurang(bil1, bil2) << endl << endl;
                break;
            default:
            cout << "Pilihan tidak tersedia";
        }
        goto start;
    } while (pilihan != 5);
}