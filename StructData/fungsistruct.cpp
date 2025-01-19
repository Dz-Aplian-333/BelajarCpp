#include <iostream>
using namespace std;

struct Player {
    string name;
    int hp;
    void inputData(){
        cout <<"Masukan nama: "; cin >> name;
        cout << "Masukan angka: "; cin >> hp;

    }
};

void display(Player p){
    cout << "Informasi Player\n";
    cout << "Name : " << p.name << endl;
    cout << "Nomor : " << p.hp << endl; 
}

int main(){
    Player p1; 
    p1.inputData();
    display(p1);

    return 0;
} 