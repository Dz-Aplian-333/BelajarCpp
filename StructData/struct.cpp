#include <iostream>
using namespace std;

struct Ipk {
    string smt;
    int nilai;
    int sks;
};

struct Mahasiswa {
    string name;
    string address;
    int age;
    Ipk ipk;
};

int main()
{
    Mahasiswa mhs1 = {
        .name = "Dzaki",
        .address = "Kebumen",
        .age = 18
    };

    Mahasiswa mhs2 = {"Anto", "Sempor", 21};

    Mahasiswa mhs3;

    mhs3.name = "Rizki";
    mhs3.address = "Gombong";
    mhs3.age = 17;

    Mahasiswa mhs4 ={
        .name = "Agung",
        .address = "Ayah",
        .age = 19,
        .ipk = {
            .smt = "Semester 1",
            .nilai = 80,
            .sks = 20
        }
    };

    cout << "== Mahasiswa==\n";
    cout << mhs1.name << " " << mhs1.address << " " << mhs1.age << endl;

    cout << "== Mahasiswa==\n";
    cout << mhs2.name << " " << mhs2.address << " " << mhs2.age << endl;
    
    cout << "== Mahasiswa==\n";
    cout << mhs3.name << " " << mhs3.address << " " << mhs3.age << endl;
    
    cout << "==Mahasiswa==\n";
    cout << mhs4.name << " " << mhs4.address << " " << mhs4.age << endl;
    cout << mhs4.ipk.smt << endl;
    cout << "Nilai :" << mhs4.ipk.nilai << endl;
    cout << "SKS :" << mhs4.ipk.sks << endl;

    return 0;
}
