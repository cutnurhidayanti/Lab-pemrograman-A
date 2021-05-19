#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[]){

    if(argc != 3){
        printf("anda gagal login\n");
        printf("cara login : ./FileAplikasiProgramUtama username password");
    }

        FILE *fw= fopen("login.bin","wb");
        char login[30]= "syakir@Code";

        fwrite(login,sizeof(char),sizeof(login)/sizeof(char),fw);

        fclose(fw);

        char usernameinput[10], passwordinput[10];
        strcpy(usernameinput, argv[1]);
        strcpy(passwordinput, argv[2]);
        char username[20], password[20];

        FILE *fr= fopen("login.bin", "rb");

        if((fr)==NULL){
            printf("gagal membuka file");
            return EXIT_FAILURE;
        }

        char akun[20];
        fread(akun, sizeof(char), sizeof(akun)/sizeof(char), fr);
        
        fclose(fr);

        char *kalimat[3];
        int i = 0;

        kalimat[0] =strtok(akun, "@");
        while(kalimat[i++] != NULL){
            kalimat[i] = strtok(NULL, "@");
        }

        strcpy(username, kalimat[0]);
        strcpy(password, kalimat[1]);

    if((strcmp(usernameinput, username)==0)&&(strcmp(passwordinput, password)==0)){
        printf("anda berhasil login\n");
        printf("====selamat datang di game logika sukses====\n");

        typedef struct Game{
            char *soal;
            char *jawaban;
            int poin;
        }game;
        
        game soal[7];

        soal[0].soal="jika dibutuhkan 10 menit untuk merebus 1 telur, berapa waktu yang diperlukan untuk merebus 5 butir telur?";
        soal[0].jawaban="a";
        soal[0].poin=10;

        soal[1].soal="dalam satu bus tingkat ada 10 penumpang. saat bus berhenti, sebanyak 5 orang turun lalu 3 orang naik. berapa total penumpang di bus sekarang?";
        soal[1].jawaban="c";
        soal[1].poin=10;

        soal[2].soal="kereta api listrik bergerak kearah timur dari barat dengan kecepatan 70km/jam. Bila angin berlawanan arah berembus dengan kecepatan 40 km/jam, maka kearah mana asapnya?";
        soal[2].jawaban="b";
        soal[2].poin=15;

        soal[3].soal="berapa bulan memiliki 31 hari, beberapa lagi 30 hari, berapa bulan yang memiliki 28 hari?";
        soal[3].jawaban="c";
        soal[3].poin=15;

        soal[4].soal="sebuah lubang ditanah memiliki kedalaman 100 meter dengan dimensi ukuran panjang 10 meter dan lebar 10 meter. berapa banyak tanah yang ada didalamnya?";
        soal[4].jawaban="a";
        soal[4].poin=15;

        soal[5].soal="anaknya wulan adalah ibunya anak perempuanku. aku siapanya wulan?";
        soal[5].jawaban="c";
        soal[5].poin=15;

        soal[6].soal="jika setiap hari teratai tumbuh dua kali lipat dari hari sebelumnya. pada hari ke-36 bunga teratai telah memenuhi kolam. pada hari keberapa bunga teratai memenuhi setengah dari kolam tersebut? ";
        soal[6].jawaban="b";
        soal[6].poin=20;

        printf("jika dibutuhkan 10 menit untuk merebus 1 telur, berapa waktu yang diperlukan untuk merebus 5 butir telur?\n a). 1 menit b). 5 menit c). 10 menit");


        


    }else{
        printf("gagal login ke program, silahkah cek username dan password anda");
    }

    return 0;
}