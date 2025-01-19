#include <iostream>
using namespace std;

int main(){
    enum Premission { READ = 1, WRITE = 2, DELETE = 4};
    int balance = 0;

    //menggunakan bitwise or
    // akan berubah ketika WRITE dihapus
    //Premision(READ)
    Premission userPremission = Premission(READ | WRITE);

    if(userPremission & WRITE)
    {
        cout << "Anda boleh topup\n";
        balance += 100;
    }
    cout << "Saldo: " << balance << endl;

    return 0;
}