#include <iostream>
using namespace std;

enum Role {USER, ADMIN};

int main(){
    string name = "Abdul";
    //coba perbedaan ketika user_role == ADMIN
    Role user_role = USER;

    if (user_role == ADMIN)
    {
        cout << "Welcome Admin" << endl;
    }
    else
    {
        cout << "Halo Rakyat " << name << endl;
    }
    

    return 0;
}