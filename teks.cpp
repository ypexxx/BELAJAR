#include <iostream>
#include <chrono>
#include <string>
using namespace std;
/*
int main() { //biodata yuaa
    cout << "=================================" << endl;
    cout << "Hello World! \t";
    cout << ">>Belajar C++" <<endl;
    cout << "=================================" << endl;

    cout << "Nama \t\t";
    cout << ": Yuafiq Alfin Al Khasan \n";

    cout << "Cita-cita \t";
    cout << ": Sukses dunia akhirat \n";

    cout << " Hobi \t\t";
    cout << ": Membaca" <<endl <<endl;

    int x = 5;
    int y = 15;
    int z = x + y;
    cout << "Penjumlahan antara nilai " << x << " dan nilai " << y << " adalah " << z << endl;

    int tanggal = 10;
    int bulan = 9;
    cout << "Sekarang tanggal " << tanggal << " bulan ke-" << bulan; 
    return 0;
}
*/


/*
//latihan fungsi
int penjumlahan (int x, int y) {
    return x + y;
}

int perkalian (int x, int y) {
    return x * y;
}

void log(int result) {
    cout << "hasilnya adalah " << result << endl;
}

int main () {
    int hasil1 = penjumlahan (4, 6);
    int hasil2 = perkalian (11, 9);
    
    cout << hasil1 << endl;
    cout << hasil2 << endl;

    log(hasil1);
    log(hasil2);
    return 0;
}
*/


/*
//ALPROG 14 September 2023
int main() {
    // deklarasi tipe data variabel
    string nama;
    int umur;
    char jenis_kelamin;

    // proses input
    cout << "Siapa namamu?" << endl;
    cout << "jawab: ";
    // Menyimpan data ke variabel
    getline(cin, nama);

    cout << "Berapa umurmu?" << endl;
    cout << "jawab: ";
    // Menyimpan data variabel
    cin >> umur;

    cout << "Jenis kelamin [L/P]: ";
    // Menyimpan data variabel
    cin >> jenis_kelamin;

    // Proses output
    cout << "Halo selamat pagi, " << nama << "Sekarang anda berusia " << umur << " Tahun dan anda berjenis kelamin " << jenis_kelamin;
}
*/



// ALprog percabangan
int main() {
    string username;
    string password;

    menu :
    cout <<"======== HALAMAN LOGIN ========" <<endl;
    cout << "Silakan masukkan username anda: ";
    cin>> username;
    
    cout << "Silakan masukkan password anda: ";
    cin >> password;

    if ((username=="23.11.5596") && (password=="amikom")) {
        cout << "Selamat anda berhasil login";
    } else {
        cout << "username dan password anda mungkin salah";
    }
    goto menu;
}




/*
// Alprog percabangan
int main () {
    string username;
    string password;

    cout << "======== HALAMAN LOGIN ========" <<endl;
    cout << "Masukkan username anda: ";
    cin >> username;

    if (username=="23.11.5596") {
        cout << "masukkan password anda: ";
        cin >> password;
        if (password=="amikom") {
            cout << "anda telah berhasil login";
        } else {
            "Password anda salah";
        }
    } else {
        cout << "Username anda salah";
    }
}
*/