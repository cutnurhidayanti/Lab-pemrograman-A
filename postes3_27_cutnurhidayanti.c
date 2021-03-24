#include<stdio.h>

int main(){
int panjang, lebar;
//a kecil = 97
int huruf=97;
int i,j;

printf("inputkan nilai panjang:");
scanf("%d",&panjang);
printf("inputkan nilai lebar:");
scanf("%d",&lebar);

//jumlah baris kebawah
 for(i=1; i<=panjang; i++){
   //jumlah baris kesamping
   for(j=1; j<=lebar; j++){

     printf("%c",huruf++);

    // printf("%d",j);
   }
   printf("\n");
 }

  return 0;
}
