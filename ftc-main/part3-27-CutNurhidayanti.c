#include<stdio.h>

int main(){
  int pin,menu,pilihan;


  printf("===PILIHAN MENU PENARIKAN===\n");
  printf("masukkan pin 6 angka :");
  scanf("%d", &pin);

  while(pin != 221122){
        printf("pin anda salah, silahkan imput pin kembali\n");
        printf("imputkan kembali pin :");
        scanf("%d",&pin);
  }
  printf("===pilih menu selanjutnya===\n");
        printf("1->100.000\n");
        printf("2->200.000\n");
        printf("3->500.000\n");
        printf("4->1.000.000\n");
        printf("mesukkan menu pilihan :");
        scanf("%d",&menu);
        if(menu == 1){
            printf("penarikan berhasil,sisa saldo anda adalah 1.400.000\n");
        }else if(menu == 2){
            printf("penarikan berhasil,sisa saldo anda adalah 1.300.000\n");
        }else if(menu == 3){
            printf("penarikan berhasil,sisa saldo anda adalah 1.200.000\n");
        }else if(menu == 4){
            printf("penarikan berhasil,sisa saldo anda adalah 500.000\n");
        }
    printf("===TERIMA KASIH TELAH MELAKUKAN TRANSAKASI===");
    return 0;
}