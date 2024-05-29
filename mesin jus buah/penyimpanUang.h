#include <iostream>
using namespace std;

class penyimpanUang
{
    public:
        int getUangSekarang() const
        {
            return uangTersimpan;
        }

        void terimaUang(int uangMasuk)
        {
            uangTersimpan = uangTersimpan += uangMasuk;
        }

        penyimpanUang()
        {
            uangTersimpan = 500;
        }

        penyimpanUang(int uangDalam)
        {
            if (uangDalam >= 0) {
                uangTersimpan = uangDalam;
            } else {
            uangTersimpan = 500;
            }
        }

    private:
        int uangTersimpan;
};