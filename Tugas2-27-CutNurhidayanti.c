#include<stdio.h>

//fungsi untuk mengeksekusi kembalian dari total belanja
int belanja(int totalbelanja, int uang, int kembalian, int uangkurang, int uangtambahan){
    if(uang>=totalbelanja){ //ketika uang yang dibayar lebih besar dari pada uang belanjaan
        kembalian=uang-totalbelanja;
        printf("kembalian anda          : Rp.%d\n\n", kembalian);
    }if(uang<totalbelanja){ // ketika uang kurang dari nilai total belanja
        printf("\n");
        uangkurang=totalbelanja-uang;
        printf("uang anda kurang        : Rp.%d\n",uangkurang);
        printf("masukkan uang tambahan  : Rp.");
        scanf("%d",&uangtambahan);
        kembalian=uangtambahan-uangkurang;
        printf("kembalian anda          : Rp.%d\n\n", kembalian);
    }
    return kembalian;
}

int main(){
    int pilihan, jumlahbarang, totalbelanja=0, sum,uang,i,kembalian,uangkurang, uangtambahan;
    char ingin;

    typedef struct n{
        char *namanovel;
        int harganovel;
    }Tereliye;

    Tereliye novel[8];

    novel[0].namanovel = "Pulang";
    novel[0].harganovel = 75000;
    
    novel[1].namanovel = "Pergi";
    novel[1].harganovel = 80000;

    novel[2].namanovel = "Gnalup Pergi";
    novel[2].harganovel = 89000;

    novel[3].namanovel = "Tentang Kamu";
    novel[3].harganovel = 95000;

    novel[4].namanovel = "Negeri Para Bedebah";
    novel[4].harganovel = 85000;

    novel[5].namanovel = "Negeri Diujung Tanduk";
    novel[5].harganovel = 90000;

    novel[6].namanovel = "Bedebah Diujung Tanduk";
    novel[6].harganovel = 95000;

    novel[7].namanovel = "Rembulan Tenggelam Diwajahmu";
    novel[7].harganovel = 90000;

    printf("===SELAMAT DATANG DI DUNIA NOVEL TERELIYE===\n\n");
    do{
        printf("1. Daftar Buku\n");
        printf("2. Belanja\n");
        printf("3. Keluar\n\n");

        printf("Menu Pilihan : ");
        scanf("%d", &pilihan);
        while(pilihan<1 || pilihan>3){ //mengulang ketika pilihan yang diimput bukan 1,2 dan 3
            printf("maaf, input anda tidak sesuai !\n");
            printf("masukkan menu pilihan :");
            scanf("%d", &pilihan);
        }
        if(pilihan == 1){
            printf("+----+---------------------------------------------+\n");
            printf("|    |                                             |\n");
            printf("| NO |\tNama Novel                      Harga      |\n");
            printf("|    |                                             |\n");
            printf("+----+---------------------------------------------+\n");
            printf("|    |                                             |\n");
            printf("| 1  |\t%s                           75k       |\n",novel[0].namanovel);
            printf("| 2  |\t%s                            80k       |\n",novel[1].namanovel);
            printf("| 3  |\t%s                     89k       |\n",novel[2].namanovel);
            printf("| 4  |\t%s                     95k       |\n",novel[3].namanovel);
            printf("| 5  |\t%s              85k       |\n",novel[4].namanovel);
            printf("| 6  |\t%s            90k       |\n",novel[5].namanovel);
            printf("| 7  |\t%s           95k       |\n",novel[6].namanovel);
            printf("| 8  |\t%s     90k       |\n",novel[7].namanovel);
            printf("|    |                                             |\n");
            printf("+----+---------------------------------------------+\n");
            printf("tekan enter untuk menu selanjutnya..."); 
            getchar();
            printf("\n");
        }if(pilihan == 2){
            do{
                printf("imput nomor novel yang akan dibeli:");
                scanf("%d", &i);
                while(i<1 || i>8){ //mengulang jika nomor novel yang diimput bukan 1-8 
                    printf("maaf imput anda tidak sesuai !\n"); 
                    printf("masukkan nomor novel :");
                    scanf("%d", &i);
                }
                printf("masukkan jumlah barang :");
                scanf("%d", &jumlahbarang);
                sum=jumlahbarang*novel[i-1].harganovel;
                totalbelanja=totalbelanja+sum;
                printf("\n");

                printf("apakah anda ingin belanja lagi (y/n) :");
                scanf(" %c", &ingin);
                while(ingin != 'y' && ingin != 'n'){ //mengulang ketika karakter yang diimput bukan y atau n
                    printf("maaf imput anda tidak sesuai !\n");
                    printf("apakah anda ingin belanja lagi (y/n) :");
                    scanf(" %c", &ingin);
                    sum=jumlahbarang*novel[i-1].harganovel;
                    totalbelanja=totalbelanja+sum;
                }
                printf("\n");
            }while(ingin=='y');

            printf("total belanja           : Rp.%d\n", totalbelanja);
            printf("masukkan uang anda      : Rp.");
            scanf("%d",&uang);
            belanja(totalbelanja, uang, kembalian, uangkurang, uangtambahan);
            break;
        }if(pilihan==3){
            break;
        }
    }while(getchar());

    printf("\t=====terima kasih=====\n");
    printf("=====semoga hari anda menyenangkan=====");
    return 0;
}


