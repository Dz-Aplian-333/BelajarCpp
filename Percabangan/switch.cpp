#include <iostream>
using namespace std;

int main() {

    char grade;

    cout << "masukan grade: ";
    cin >> grade;

    switch (toupper(grade))
    {
    case 'A':
        cout << "Luar biasa" << endl;
        break;
    case 'B':
        cout << "Baik" << endl;
        break;
    case 'C':
        cout << "Cukup" << endl;
    
    default:
        cout << "Greade salah" << endl;
        break;
    }

    return 0;
}