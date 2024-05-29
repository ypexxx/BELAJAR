#include <iostream>
using namespace std;

class tipeDispenser
{
    public:
        int getJumlahItem() const
        {
            return jumlahItem;
        }

        int getBiaya() const
        {
            return biaya;
        }

        void lakukanPenjualan()
        {
            jumlahItem--;
        }

        tipeDispenser()
        {
            jumlahItem = 50;
            biaya = 50;
        }

        tipeDispenser(int setJumlahItem, int setBiaya)
        {
            if (setJumlahItem >= 0) {
                jumlahItem = setJumlahItem;
            } else {
                jumlahItem = 50;
            }
            if (setBiaya >=0) {
                biaya = setBiaya;
            } else {
                biaya = 50;
            }
        }

    private:
        int jumlahItem;
        int biaya;
};