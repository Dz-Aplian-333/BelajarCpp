#include <iostream>
using namespace std;

int main(){
    //Operator logika AND, OR, NOT
    int i = 1;
    int j = 0;
    bool x;

    x = i && j;
    cout << "i && j =" << x << endl;

    x = i || j;
    cout << "i || j =" << x << endl;

    cout << "!i =" << !i << endl;

    //Operator Bitwise
    int a = 6;
    int b = 3;
    int hasil;

    // AND, OR, XOR, NOT, Left shift, Right sift
    hasil = a & b;
    cout << "a & b =" << hasil << endl;

    hasil = a | b;
    cout << "a | b =" << hasil << endl;

    hasil = a ^ b;
    cout << "a ^ b =" << hasil << endl;

    hasil = ~a;
    cout << "~a =" << hasil << endl;

    hasil = a << 1;
    cout << "a << 1 =" << hasil << endl;

    hasil = a >> 1;
    cout << "a >> 1 =" << hasil << endl;

    //Operator lainnya
    // * membuat pointer
    int *ptr_a = &a;
    cout << "Alamat memori variabel a adalah "<< &a << endl;
    //mengubah nilai a dari pointer
    cout << "Niai a awal = " << a << endl;
    *ptr_a = 25;
    cout << "Nilai a diubah =" << a << endl;

    // operator ternary
    string d = a > b ? "benar": "salah";
    cout << "a > b adalah " << d << endl;

    return 0;
}