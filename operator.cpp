#include <iostream>
using namespace std;

int main(){
    int a, b;

    cout << "masukan nilai a: ";
    cin >> a;

    cout << "masukan nilai b: ";
    cin >> b;

    cout << "Hasil + :" << a + b << endl;
    cout << "Hasil - :" << a - b << endl;
    cout << "Hasil x :" << a * b << endl;
    cout << "Hasil / :" << a / b << endl;
    cout << "hasil % :" << a % b << endl;

    float c, d;
    c = a;
    d = b;

    cout << "Hasil / float :" << c / d << endl;
    
    //Operator penugasan
    b += a; // b = b + a
    cout << "Hasil += :" << b;

    b -= a;
    cout << ", -= :" << b;

    b *= a;
    cout << ", *= :" << b;

    b/= a;
    cout << ", /= :" << b;

    b %= a;
    cout << ", %= :" << b << endl;

    // menggunakan operator pembanding
    bool hasil;

    hasil = a > b;
    cout << "Hasil a > b = " << hasil;

    hasil = a < b;
    cout << ", a < b = " << hasil;

    hasil = a >= b;
    cout << ", a >= b = " << hasil;

    hasil = a <= b;
    cout << ", a <= b = " << hasil;

    hasil = a == b;
    cout << ", a == b = " << hasil;

    hasil = a != b;
    cout << ", a != b = " << hasil << endl;

    return 0;
}