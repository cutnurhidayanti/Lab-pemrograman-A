#include <stdio.h>

int main(){
  char nama[30];
  char ubah, jadi;
  char *p;

    printf("input nama :", p);
    scanf(" %[^\n]", nama);
    p = nama;

    getchar();
    printf("input karakter yang ingin diubah :", p);
    scanf("%c",&ubah);

    getchar();
    printf("input hasil karakter : ", p);
    scanf("%c",&jadi);

    while (*p++ !='\0'){
      if(*p == ubah) *p=jadi;
    }
    printf("hasil : %s\n",nama);

  return 0;
}
