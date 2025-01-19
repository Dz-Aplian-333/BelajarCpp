#include <iostream>
using namespace std;

struct Notif
{
    enum {EMAIL, SMS} type;
    string title;
    string isi;
    union 
    {
        char* nomor;
        char* email_address;
    };
};

int main(){
      Notif sms =
    {
        .type = Notif::SMS,
        .title = "Greeting",
        .isi = "Halo Selamat datang",
        .nomor = "081234567890"
    };

    Notif email =
    {
        .type = Notif::EMAIL,
        .title = "Welcome",
        .isi = "Selamat datang di aplikasi",
        .email_address = "mail@petanikode.com"
    };

    cout << "## NOTIFICATION SMS ##\n";
    cout << "to: " << sms.nomor << endl;
    cout << "message: " << sms.isi << endl;

    cout << endl;

    cout << "## NOTIFICATION EMAIL ##\n";
    cout << "subject: " << email.title << endl;
    cout << "to: " << email.email_address << endl;
    cout << "message: " << email.isi << endl;

    return 0;
} 