#include <iostream>
#include <string>
using namespace std;

//class tanpa constructor
class Polos {
    public:
        string dataString;
        int dataInteger;
};

//class dengan constructor
class Mahasiswa {
    public:
        string nama;
        string alamat;
        string NIM;
        int nilai;

        //constructor dengan parameter
        Mahasiswa(string inputNama, string inputNIM, string inputAlamat) {
            Mahasiswa::nama = inputNama;
            Mahasiswa::NIM = inputNIM;
            Mahasiswa::alamat = inputAlamat;

            cout << "Nama anda\t: " << Mahasiswa::nama << endl;
            cout << "NIM anda\t: " << Mahasiswa::NIM << endl;
            cout << "Alamat anda\t: " << Mahasiswa::alamat << endl;
            cout << endl;
        };

        void tampilData() {
            cout << "Nama saya adalah " << Mahasiswa::nama << " dan NIM saya adalah " << Mahasiswa::NIM << endl;
        }

        string getNama() {
            return Mahasiswa::nama;
        }
};


int main() {

    Mahasiswa mahasiswa1 = Mahasiswa("Yuafiq", "23.11.5596", "Sleman");
    Mahasiswa mahasiswa2 = Mahasiswa("Satria Hadi", "23.11.5596", "Nganjuk");
    mahasiswa1.tampilData();
    cout << "Nama dari mahasiswa 1 adalah : " << mahasiswa1.getNama();

    return 0;
}