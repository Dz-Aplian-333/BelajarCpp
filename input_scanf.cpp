#include <iostream>
using namespace std;

int main(){
     char name[20], web_address[30];

    printf("Nama: ");
    scanf("%[^ns", &name);

    printf("Alamat web: ");
    scanf("%s", &web_address);

    printf("\n------------------------------\n");
    printf("Nama yang diinputkan: %s\n", name);
    printf("Alamat Web yang diinputkan: %s\n", web_address);
    
    return 0;
}