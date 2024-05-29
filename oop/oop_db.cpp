#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Mahasiswa {
    public:
        string nama;
        string NIM;
        string jurusan;

        Mahasiswa(string nama, string NIM, string jurusan) {
            Mahasiswa::nama = nama;
            Mahasiswa::NIM = NIM;
            Mahasiswa::jurusan = jurusan;
        };

        void tampilData() {
            cout << "Nama mahasiswa\t\t: " << Mahasiswa::nama << endl;
            cout << "NIM mahasiswa\t\t: " << Mahasiswa::NIM << endl;
            cout << "Jurusan mahasiswa\t: " << Mahasiswa::jurusan << endl;
        };

        string stringify() {
            return nama + " " + NIM + " " + jurusan + "\n";
        }
};

class DBase {
    public:
        ifstream in;
        ofstream out;
        string fileName;

        DBase(const char* fileName) {
            DBase::fileName = fileName;
        };

        void save(Mahasiswa data) {
            cout << data.nama << endl;
            cout << data.NIM << endl;
            cout << data.jurusan << endl;

            DBase::out.open(DBase::fileName,ios::app);
            DBase::out << data.stringify();
            DBase::out.close();
        };

        void showAll() {
            DBase::in.open(DBase::fileName, ios::in);
            string nama, NIM, jurusan;
            int index = 1;

            while(!DBase::in.eof()) {
                DBase::in >> nama;
                DBase::in >> NIM;
                DBase::in >> jurusan;
                cout << index++;
                cout << nama;
                cout << NIM;
                cout << jurusan << endl;
            }
            DBase::in.close();
        }
};

int main() {

    // Input User
    string nama, NIM, jurusan;
    cout << "Masukkan data mahasiswa";
    cout << "Masukkan nama :";
    cin >> nama;
    cout << "Masukkan NIM :";
    cin >> NIM;
    cout << "Masukkan jurusan";
    cin >> jurusan;

    // Membuat object-object yang diperlukan
    Mahasiswa dataMahasiswa = Mahasiswa("Agil", "23.11.5596", "Informatika");
    dataMahasiswa.tampilData();
    DBase database = DBase("data.txt");

    // Save data ke database
    database.save(dataMahasiswa);
}