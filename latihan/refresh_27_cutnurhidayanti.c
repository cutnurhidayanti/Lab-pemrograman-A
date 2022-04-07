#include<stdio.h>

int main(){
 char var[20];

  printf("lab pemograman A");
  //%[^\n] untuk membaca karakter pada sebuah kalimat
  scanf("%[^\n]s",&var);
  printf("%s",var);

  return 0;
}
