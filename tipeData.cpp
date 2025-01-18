#include <iostream>
using namespace std;

int main(){
    //deklarasi tipedata variabel
    string nama;
    int umur;
    char jenis_kelamin;

    //proses input
    cout << "Namamu" << endl;
    cout << "Jawab: ";
    //menyimpan data ke variabel
    getline(cin, nama);

    cout << "Berapa umurmu?" << endl;
    cout << "Jawab: ";
    cin >> umur;

    cout << "Jenis Kelamin [L/P] :";
    cin >> jenis_kelamin;

    //output proses
    cout << "Salam Kenal, " << nama << " Umurmu ternyata ";
    cout << umur << " kelaminmu " << jenis_kelamin << endl;

    //membuat nama alias untuk tipe data
    typedef int angka;
    typedef char teks;

    //membuat variabel tipedata alias
    teks merk = "Rose brand 1kg";
    angka harga = 10000;

    // menampilkan isi variabel
    cout << "Barang: " << merk << endl;
    cout << "Harganya : " << harga << endl;

    return 0;
}