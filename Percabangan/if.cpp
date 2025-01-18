#include <iostream>
using namespace std;

int main() {

    cout << "=== Program Pembayaran ===" << endl;
    unsigned int total;

    cout << "Masukan total belanja = ";
    cin >> total;

    if (total > 100000)
    {
        cout << "selamat anda dapat hadiah" << endl;
    }
    
    cout << "Terimakasih sudah berbelanja" << endl;

    return 0;
}