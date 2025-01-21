#include <iostream>
using namespace std;

int main()
{
    struct Weapon {
        string name;
        int attack;
        int guard;
    };
    struct Player {
        string name;
        int score;
        int hp;
        Weapon *weapon;
    };

    Player p1 {
        .name = "Bakri",
        .score = 0,
        .hp = 100,
        .weapon = new Weapon
    };
    (*p1.weapon).name = "Katana";
    (*p1.weapon).attack = 16;
    (*p1.weapon).guard = 10;

    //cek status player
    cout << "PLAYER STATUS" << endl;
    cout << "Name   :" << p1.name << endl;
    cout << "Score  :" << p1.score << endl;
    cout << "HP     :" << p1.hp << endl;
    cout << "Weapon" << endl;
    cout << "    Name:" << (*p1.weapon).name << endl;
    cout << "   attack:" << (*p1.weapon).attack << endl;
    cout << "   guard:" << (*p1.weapon).guard << endl;
    
    return 0;
}
