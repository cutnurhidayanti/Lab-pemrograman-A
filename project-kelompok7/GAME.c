#include <stdio.h>
#include <stdlib.h>
int main(){
  int pilihan;
  char yorn;
do{
  printf("+---------------------------------------+\n");
  printf("|\tWho Want to be a Millioner\t|\n");
  printf("|\t\t\t\t\t|\n");
  printf("| 1. Peraturan Game\t\t\t|\n");
  printf("| 2. Start Game\t\t\t\t|\n");
  printf("| 3. Keluar\t\t\t\t|\n");
  printf("|\t\t\t\t\t|\n");
  printf("+---------------------------------------+\n");
  do{
    printf("Pilihan Anda : "); scanf(" %d", &pilihan);printf("\n");
    //progran neminta input ulang jika input yang dimasukkan tidak sesuai
    if(pilihan<1||pilihan >3){
      printf("\n");
      printf("  Maaf, Input yang Anda Masukkan Tidak Sesuai!\n\n");
    }
  }while(!(pilihan==1||pilihan==2||pilihan==3));

  if(pilihan == 1){
    //disini akan dimunculkan Peraturan GAME
    printf("Peraturan gamenya............................\n\n");
    printf("Tekan Enter untuk Melanjutkan...");getchar();
  }else if(pilihan == 2){
    //disini GAMEnya akan dimulai
    printf("gamenya...................................\n\n");
  }else if(pilihan == 3){
    do{
      //program akan mengkonfirmasi yes or no (y/n) jika memilih menu 3
      printf("Apakah Anda yakin ngin Keluar dari Game(y/n)? "); scanf(" %c", &yorn);
      if(!(yorn=='y'||yorn=='n')){
      //program menampilkan error jika input yang dimasukkan bukan y/n
        printf("\n");
        printf("  Maaf, Input yang Anda Masukkan Tidak Sesuai!\n\n");
        }
      }while(!(yorn=='y'||yorn=='n'));
      //progam akan keluar jika input yang dimasukkan y
      if(yorn=='y'){
        break;
      //progam akan kembali ke menu awal jika input yang dimasukkan n
      }else if(yorn=='n'){
        continue;
      }
  }
  //kembali ke menu awal setelah melihat Peraturan permainan dengan ENTER
}while(getchar()=='\n');
  return EXIT_SUCCESS;
}
