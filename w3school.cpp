#include <iostream>
#include <string>
using namespace std;

/* String C++
int main() {
    string yourFullName;
    string firstName = "Yuafiq";
    string lastName = "Alfin";
    string fullName = firstName + " "+ lastName;
    fullName[5] = 'o';
    cout << "nama lengkap kamu adalah: " << fullName <<endl;
    cout << "Jumlah huruf didalamnya adalah: " << fullName.length() <<endl;
    cout << fullName[0] <<endl;

    getline (cin, yourFullName);
    cout << "Hasil isian kamu: " << yourFullName <<endl;
}
*/



// Math C++



/*
// Booleans C++
int main() {
    float umurAku;
    float umurKu = 22;
    float syaratUmurKerja = 25;
    cout << (umurKu > syaratUmurKerja) <<endl;
    cout << (umurKu == 4) <<endl;
    cout << 7 % 4 <<endl;
    cin >> umurAku;

    if (umurAku >= 25) {
        cout << "Anda terlalu tua";
    
    }else if (umurAku >= 20) { 
        cout << "anda masuk kriteria";
    
    }else if (umurAku > 17) {
        cout << "kamu dewasa";
    
    }else {
        cout << "Mbuh kudu pie";
    }
}
*/



/*
//Condition
int main() {
    int x = 5;
    string result = (7 < x) ? "true" : "false";
    cout << result;
}
*/


/*
int main() {
    int x;
    string hasil;
    hasil = (10 > 14) ? "benar" : "salah";
    cout << hasil;
}
*/



/*
//Switch
int main()  {
    int bilangan1;
    int bilangan2;
    char operan;
    

    cout << "Masukkan bilangan pertama: " <<endl;
    cin >> bilangan1;
    cout << "Masukkan bilangan kedua: " <<endl;
    cin >> bilangan2;
    cout << "Pilih operator: " <<endl;
    cin >> operan;

    int result = operan;
    switch (result) {
        case '+' :
        cout << bilangan1 + bilangan2;
        break;
    }

    cout << "Hasilnya adalah: " << result;
}
*/



/*
int main() {
    int x, y;
    cin >> x;
    switch(x) {
        case 5:
            cout << "Ini angka lima";
            break;
        case 6:
            cout << "Ini angka enam";
            break;
        default:
            cout << "Unknown";
            break;
    }
}
*/





//Looping C++

    // Increment dan decrement
    // Increment dan decrement masing masing ada dua yaitu preincrement dan postincrement
    // a++ adalah sebuah postincrement yang dibaca (a=a+1)
    // preincremennt (++a) adalah nilai dikeluarin dulu dilanjut hasil (a=5  >  5,6)
    // postincrement (a++) adalah angka awal selanjutnya baru ditambah (a=5  >  6,6)




/*
int main() {
    int i = 0;
    string perulangan = 'benar';

    while(perulangan == 'benar') {
        cout << "Jika kamu menulis \"benar\" maka akan berhenti" <<endl;
        cout << "Jawab: ";
        cin >> perulangan;
        i++;
    }
}
*/


/*
int main() {
    int total = 0;
    for(int loop=1; loop<=10; loop++) {
    total += loop;
    cout << loop << " || ";
    cout << total << endl;
    }
}
*/




// int main() {
//     int n;
//     cin >> n;
//     for(int loop=1; loop<=n; loop++) {
//         for(int i=n; i>=loop; i--) {
//         cout << "*";
//         } cout << endl;
//     }
// }



/*
int main() {
    int x = 10;
    while(x < 20) {
        cout << "Looping ke ";
        cout << x << endl;
        x += 1;
    }
}
*/



/*
int main() {
menu :    
    int i = 0;
    string ulangi = "benar";

    while(ulangi == "benar") {
        cout << "Apakah kamu ingin mengulangi?" <<endl;
        cout << "Jawab (y/t): ";
        cin >> ulangi;
        i++;
    }

    cout << "Perulangan selesai!" <<endl;
    cout << "Kamu mengulang sebanyak " << i << "Kali";

    cout << "Perulangan selesai";
    goto menu;
    system("cls");
}
*/



/*
int main() {
    int n, a, b;
    cout << "Pilih bentuk segitiga yang ingin di cetak = \n";
    cout << "1. Segitiga siku-siku\n";
    cout << "2. Segitiga terbalik\n";
    cin >> n;

    if(n == 1) {
        cin >> a;
        if(a % 2 == 0) {
            cout << "Bilangan genap tidak bisa\n";
        } else {
             cout << "Masukkan nilai segitiga (Harus ganjil) = \n";
    
                for(int i=1; i<=a; i++) {
                    for(int j=1; j<=i; j++) {
                        cout << "*";
                    }cout << "\n";
                }
            }
        } 

    else if(n==2) {
        cin >> b;
        if(b%2==0) {
            cout << "Bilangan genap tidak bisa";
        } else {
            cout << "Masukkan tinggi segitiga= \n";
                for(int i=1; i<=b; i++) {
                    for(int j=b; j>=i; j--) {
                        cout << "*";
                    }cout << "\n";
                }
            }
        
    }
}
*/



/*
int main() {
    int n, a, b;
    cout << "Pilih bentuk segitiga yang ingin di cetak= \n";
    cout << "1. Segitiga siku siku\n";
    cout << "2. Segitiga terbalik\n";
    cin >> n;

    if(n==1) {
        cin >> a;
        if(a % 2 == 1) {
            for(int i=1; i<=a; i++) {
                for(int j=1; j<=i; j++) {
                    cout << "*";
                } cout << "\n";
            }
        } else {
            cout << "Bukan bilangan ganjil";
        }
    }
    else if(n==2) {
        cin >> b;
        if(b % 2 == 0) {
            cout << "Harus bilangan ganjil";
        } else {
            cout << "Masukkan tinggi segitiga= \n";
            for(int i=1; i<=b; i++) {
                for(int j=b; j>=i; j--) {
                    cout << "#";
                } cout << "\n";
            }
        }
    }
}
*/


// int main() {
//     int tinggi;
//     cout << "Masukkan tinggi segitiga";
//     cin >> tinggi;

//     for(int i=1; i<=tinggi; i++) {
//         for(int j=1; j<=i; j++) {
//             cout << " * ";
//         }

//         for(int j=tinggi; j>i; j--) {
//             cout << " + ";
//         }
//         cout << endl;
        
//     }
//     for(int i=1; i<=tinggi; i++) {
//         for(int j=tinggi; j>i; j--) {
//             cout << " * ";
//         }
//         cout << endl;
//     }
// }



/*
int main() {
    int a, b, c;
    cout << "Masukkan tinggi segitiga" << endl;
    cin >> a;

    if(a) {
        for(int i=1; i<=a; i++) {
            for(int j=1; j<=i; j++) {
                cout << "*" << endl;
            }
        }
    }   
}
*/




/*
int main() {
    int myNumbers[7] = {10, 20, 30, 40, 50, 60, 70};
    for (int i : myNumbers) {
        cout << i << "\n";
    }
} 
*/



// Nilai maksimum minimum
// int main() {
//     int jumlah_data, nilai, maks, minim;
//     cout << "Masukkan jumlah data yang akan anda input: ";
//     cin >> jumlah_data;
//     for(int i=1; i<=jumlah_data; i++) {
//         cout << "Masukkan data ke- " << i << " =";
//         cin >> nilai;
//             if(i == 1) {
//                 maks = nilai;
//                 minim = nilai;
//             } if(nilai > maks) {
//                 maks = nilai;
//             } if(nilai < minim) {
//                 minim = nilai;
//             }
//     }
//     cout << "Nilai Maksimum adalah: " << maks << endl;
//     cout << "Nilai Minimum adalah: " << minim << endl;
// }




/*
// Array
int main() {
    string namaBuah[5] = {"Mangga", "Apel", "Jeruk", "Manggis", "Pisang"};
    for (int i = 0; i < 3; i++) {
        cout << namaBuah[i] << "\n";
    }
}
*/


// // DO While
// int main() {
// int i;

// do {
//     for(int i=1; i<7; i++) {
//         cout << i << endl;
//     }
// }
// while (i < 3);
// }