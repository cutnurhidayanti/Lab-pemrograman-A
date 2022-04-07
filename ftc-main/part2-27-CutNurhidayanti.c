#include<stdio.h>

int main(){
int d1,d2;
float luas;

printf("===program untuk mencari luas belah ketupat===\n");
printf("masukkan nilai d1 :");
scanf("%d",&d1);

printf("masukkan nilai d2 :");
scanf("%d",&d2);

luas = (float)1/2*(float)d1*(float)d2;

printf("luas belah ketupat adalah %.2f",luas);

  return 0;
}
