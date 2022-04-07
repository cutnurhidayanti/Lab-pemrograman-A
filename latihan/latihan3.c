#include<stdio.h>

int main(){

  char huruf ;

  printf("masukkan huruf:");
  scanf("%c",&huruf);

  //+32 untuk membuat huruf kecil jika diinput huruf besar
  huruf += 32;

  //printf("%d",huruf);--> untuk melihat decimal anci
  printf("%c",huruf);

  return 0;
}
