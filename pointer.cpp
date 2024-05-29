#include <iostream>
using namespace std;

void tukar(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    cout << "======POINTER 1=======" << endl;
    int *p;
    int num1 = 5;
    int num2 = 8;

    p = &num1;
    cout << "Baris 9 : &num1 = " << &num1 << ", p = " << p << endl; //berupa alamat num1 dan alamat num1
    cout << "Baris 10 : num1 = " << num1 << ", *p = " << *p << endl;

    *p = 10;
    cout << "Baris 12 : num1 = " << num1 << ", *p = " << *p << endl;

    p = &num2;
    cout << "Baris 14 : &num2 = " << &num2 << ", p = " << p << endl;
    cout << "Baris 15 : num2 = " << num2 << ", *p = " << *p << endl;

    *p = 2 * (*p);
    cout << "Baris 17 : num2 = " << num2 << ", *p = " << *p << endl << endl;

    cout << "======POINTER 2=======" << endl;
    int a = 10;
    int b = 20;
    int temp;

    cout << "Nilai asli a = " << a << ", b = " << b << endl;

    // temp = a;
    // a = b;
    // b = temp;

    tukar(&a, &b);

    cout << "Nilai setelah ditukar a = " << a << ", b = " << b << endl;
}