#include <iostream>
using namespace std;

int tambah(float a, float b){
    return (a + b);
}
int kurang(float a, float b){
    return (a - b);
}
int kali(float a, float b){
    return (a * b);
}
int bagi(float a, float b){
    return (a / b);
}

int main(){
    int x, y;
    char opsi;

    cout << "=====================" << endl;
    cout << "Kalkulator  Sederhana" << endl;
    cout << "=====================" << endl;
    cout << "=====================" << endl;
    cout << "Pilih Operasi Hitung " << endl;
    cout << "=====================" << endl;
    cout << "[A] Tambah [B] Kurang" << endl;
    cout << "[C] Kali   [D] Bagi  " << endl;
    cout << "=====================" << endl;
    cout << "Masukan Pilihan : ";
    cin >> opsi;
    cout << "=====================" << endl;
    cout << "Masukan angka pertama";
    cin >> x;
    cout << "=====================" << endl;
    cout << "Masukan angka kedua :"; 
    cin >> y;
    cout << "=====================" << endl;


    switch (toupper(opsi))
    {
    case 'A':
        cout << "Hasilnya adalah =" << tambah(x,y) << endl;
        cout << "=====================" << endl;
        break;
    case 'B':
        cout << "Hasilnya adalah =" << kurang(x,y) << endl;
        cout << "=====================" << endl;
        break;
    case 'C':
        cout << "Hasilnya adalah =" << kali(x,y) << endl;
        cout << "=====================" << endl;
        break;
    case 'D':
        cout << "Hasilnya adalah =" << bagi(x,y) << endl;
        cout << "=====================" << endl;
        break;
    default:
        cout << "!!Pilihan Tidak Ada!!" << endl;
        cout << "======Coba Lagi======" << endl;
        break;
    }


    return 0;
}