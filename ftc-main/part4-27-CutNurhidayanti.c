#include<stdio.h>

int main(){
int baris,kolom;

printf("inputkan baris :");
scanf("%d",&baris);

printf("inputkan kolom :");
scanf("%d",&kolom);

//fungsi untuk membentuk persegi ataupun persegi panjang
for(int i=0; i<baris;i++){
    for(int j=0;j<kolom;j++){
        printf("+");
    }
    printf("\n");
}

    return 0;
}