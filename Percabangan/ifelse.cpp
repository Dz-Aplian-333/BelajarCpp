#include <iostream>
using namespace std;

int main(){

    string password;
    cout << "Login" << endl;
    cout << "Masukan Password : "<< endl;
    cin >> password;

    if (password == "kopi")
    {
        cout << "Selamat datang" << endl;
    }
    else
    {
        cout << "Password salah" << endl;
    }

    return 0;
}