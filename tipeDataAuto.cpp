#include <iostream>
using namespace std;

    //command compile
    //g++ <name.cpp> -std=c++11 -o <name>
    
int main(){
    auto name = "Dzaki";
    auto age = 18;
    auto tb = 100.5;
    auto status = false;

    cout << "Nama: " << name << endl;
    cout << "Tipedata: " << typeid(name).name() << endl;

    cout << "Umur: " << age << endl;
    cout << "Tipedata: " << typeid(age).name() << endl;

    cout << "Tinggi badan: " << tb << endl;
    cout << "Tipedata: " << typeid(tb).name() << endl;

    cout << "Status: " << status << endl;
    cout << "Tipedata: " << typeid(status).name() << endl;

    return 0;
}