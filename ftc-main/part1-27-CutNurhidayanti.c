#include <stdio.h>

int main (){
    char name[20], web_address[30];
    printf("name: ");
    scanf("%[^\n]s", &name);

    printf("Alamat web: ");
    scanf("%s" , &web_address);

  printf("\n------------------------\n");
  printf("Nama yang diinputkan: %s\n", name);
  printf("Alamat web yang diinputkan: %s\n", web_address);
    return 0;

}

