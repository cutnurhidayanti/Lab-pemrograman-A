#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int soal(){
    int sum, total=0,uang;
    char jawaban;
    
    int u=5;
    while(u>=0){
        printf(" %d\n", u);
        u--;
        Sleep(1000);
        system("cls");
    }

    for(int i=1; i<=15; i++){
        switch(i){
            case 1 :
                printf("1) Apa nama benua terluas di dunia ?\n");
                printf(" a. Amerika\n b. Asia\n c. Eropa\n d.Australia\n");

                do{
                    printf("jawaban anda : ");
                    scanf(" %c", &jawaban);
                    jawaban = tolower(jawaban);
                }while(jawaban != 'a' && jawaban != 'b' && jawaban != 'c'&& jawaban != 'd');

                if(jawaban == 'b'){
                    sum=100;
                    total += sum;
                    printf("selamat anda mendapatkan poin %d\n\n", total);
                    break;
                }else{
                    printf("jawaban anda salah, yang benar adalah B. Asia\n");
                    printf("total poin yang anda peroleh adalah : %d\n\n", total);
                    break;
                }
            case 2 :
                printf("2) Nomor atom Helium ?\n");
                printf(" a. 2\n b. 3\n c. 4\n d. 5\n");

                do{
                    printf("jawaban anda : ");
                    scanf(" %c", &jawaban);
                    jawaban = tolower(jawaban);
                }while(jawaban != 'a' && jawaban != 'b' && jawaban != 'c'&& jawaban != 'd');

                if(jawaban == 'a'){
                    sum=100;
                    printf("selamat anda mendapatkan poin %d\n", sum);
                    total += sum;
                    printf("total poin yang anda peroleh adalah : %d\n\n", total);
                    break;
                }else{
                    printf("jawaban anda salah, yang benar adalah A. 2\n");
                    total=total/2;
                    printf("total poin yang anda peroleh adalah : %d\n\n", total);
                    break;
                }
            case 3 :
                printf("3) Negara di Asia Tenggara yang tidak pernah di jajah ?\n");
                printf(" a. Malaysia\n b. Thailand\n c. Singapura\n d. Indonesia\n");

                do{
                    printf("jawaban anda : ");
                    scanf(" %c", &jawaban);
                    jawaban = tolower(jawaban);
                }while(jawaban != 'a' && jawaban != 'b' && jawaban != 'c'&& jawaban != 'd');

                if(jawaban == 'b'){
                    sum=100;
                    printf("selamat anda mendapatkan poin %d\n", sum);
                    total += sum;
                    printf("total poin yang anda peroleh adalah : %d\n\n", total);
                    break;
                }else{
                    printf("jawaban anda salah, yang benar adalah B. Thailand\n");
                    total=total/2;
                    printf("total poin yang anda peroleh adalah : %d\n\n", total);
                    break;
                }
            case 4 :
                printf("4) Jumlah provinsi di Indonesia sekarang ?\n");
                printf(" a. 32\n b. 33\n c. 34\n d. 35\n");

                do{
                    printf("jawaban anda : ");
                    scanf(" %c", &jawaban);
                    jawaban = tolower(jawaban);
                }while(jawaban != 'a' && jawaban != 'b' && jawaban != 'c'&& jawaban != 'd');

                if(jawaban == 'c'){
                    sum=200;
                    printf("selamat anda mendapatkan poin %d\n", sum);
                    total += sum;
                    printf("total poin yang anda peroleh adalah : %d\n\n", total);
                    break;
                }else{
                    printf("jawaban anda salah, yang benar adalah C. 34\n");
                    total=total/2;
                    printf("total poin yang anda peroleh adalah : %d\n\n", total);
                    break;
                }
            case 5 :
                printf("5) Nama tokoh yang menemukan baterai ?\n");
                printf(" a. Philo Farnsworth\n b. Ernest Rutherford\n c. Allesandro Volta\n d. Adam Osborne\n");

                do{
                    printf("jawaban anda : ");
                    scanf(" %c", &jawaban);
                    jawaban = tolower(jawaban);
                }while(jawaban != 'a' && jawaban != 'b' && jawaban != 'c'&& jawaban != 'd');

                if(jawaban == 'c'){
                    sum=500;
                    printf("selamat anda mendapatkan poin %d\n", sum);
                    total += sum;
                    printf("total poin yang anda peroleh adalah : %d\n\n", total);
                    break;
                }else{
                    printf("jawaban anda salah, yang benar adalah C. Allesandro Volta\n");
                    total=total/2;
                    printf("total poin yang anda peroleh adalah : %d\n\n", total);
                    break;
                }
            case 6 :
                printf("6) Pulau terbesar di dunia ?\n");
                printf(" a. Greenland\n b. Bali\n c. Jeju\n d. Samosir\n");

                do{
                    printf("jawaban anda : ");
                    scanf(" %c", &jawaban);
                    jawaban = tolower(jawaban);
                }while(jawaban != 'a' && jawaban != 'b' && jawaban != 'c'&& jawaban != 'd');

                if(jawaban == 'a'){
                    sum=1000;
                    printf("selamat anda mendapatkan poin %d\n", sum);
                    total += sum;
                    printf("total poin yang anda peroleh adalah : %d\n\n", total);
                    break;
                }else{
                    printf("jawaban anda salah, yang benar adalah A. Greenland\n");
                    total=total/2;
                    printf("total poin yang anda peroleh adalah : %d\n\n", total);
                    break;
                }
            case 7 :
                printf("7) Ibu kota Uruguay ?\n");
                printf(" a. Brussel\n b. Warsawa\n c. Copenhagon\n d. Montevideo\n");

                do{
                    printf("jawaban anda : ");
                    scanf(" %c", &jawaban);
                    jawaban = tolower(jawaban);
                }while(jawaban != 'a' && jawaban != 'b' && jawaban != 'c'&& jawaban != 'd');

                if(jawaban == 'd'){
                    sum=2000;
                    printf("selamat anda mendapatkan poin %d\n", sum);
                    total += sum;
                    printf("total poin yang anda peroleh adalah : %d\n\n", total);
                    break;
                }else{
                    printf("jawaban anda salah, yang benar adalah D. Montevideo\n");
                    total=total/2;
                    printf("total poin yang anda peroleh adalah : %d\n\n", total);
                    break;
                }
            case 8 :
                printf("8) SEA Games diadakan setiap berapa tahun sekali ?\n");
                printf(" a. 1 tahun\n b. 2 tahun\n c. 3 tahun\n d. 4 tahun\n");

                do{
                    printf("jawaban anda : ");
                    scanf(" %c", &jawaban);
                    jawaban = tolower(jawaban);
                }while(jawaban != 'a' && jawaban != 'b' && jawaban != 'c'&& jawaban != 'd');

                if(jawaban == 'b'){
                    sum=4000;
                    printf("selamat anda mendapatkan poin %d\n", sum);
                    total += sum;
                    printf("total poin yang anda peroleh adalah : %d\n\n", total);
                    break;
                }else{
                    printf("jawaban anda salah, yang benar adalah B. 2 tahun\n");
                    total=total/2;
                    printf("total poin yang anda peroleh adalah : %d\n\n", total);
                    break;
                }
            case 9 :
                printf("9) Kode wilayah tanda kendaraan bermotor kota Bandung ?\n");
                printf(" a. B\n b. D\n c. N\n d. AB\n");

                do{
                    printf("jawaban anda : ");
                    scanf(" %c", &jawaban);
                    jawaban = tolower(jawaban);
                }while(jawaban != 'a' && jawaban != 'b' && jawaban != 'c'&& jawaban != 'd');

                if(jawaban == 'b'){
                    sum=8000;
                    printf("selamat anda mendapatkan poin %d\n", sum);
                    total += sum;
                    printf("total poin yang anda peroleh adalah : %d\n\n", total);
                    break;
                }else{
                    printf("jawaban anda salah, yang benar adalah B. D\n");
                    total=total/2;
                    printf("total poin yang anda peroleh adalah : %d\n\n", total);
                    break;
                }
            case 10 :
                printf("10) iapa nama tokoh yang menemukan ilmu pemrograman ?\n");
                printf(" a. Frederick Winslow Taylor\n b. Florence Nightingale\n c. Luca Pacioli\n d. Charles Babbage\n");

                do{
                    printf("jawaban anda : ");
                    scanf(" %c", &jawaban);
                    jawaban = tolower(jawaban);
                }while(jawaban != 'a' && jawaban != 'b' && jawaban != 'c'&& jawaban != 'd');

                if(jawaban == 'd'){
                    sum=16000;
                    printf("selamat anda mendapatkan poin %d\n", sum);
                    total += sum;
                    printf("total poin yang anda peroleh adalah : %d\n\n", total);
                    break;
                }else{
                    printf("jawaban anda salah, yang benar adalah   D. Charles Babbage\n");
                    total=total/2;
                    printf("total poin yang anda peroleh adalah : %d\n\n", total);
                    break;
                }
            case 11 :
                printf("11) Planet yang berjarak 228 km dari matahari ?\n");
                printf(" a. Mars\n b. Saturnus\n c. Uranus\n d. Bumi\n");

                do{
                    printf("jawaban anda : ");
                    scanf(" %c", &jawaban);
                    jawaban = tolower(jawaban);
                }while(jawaban != 'a' && jawaban != 'b' && jawaban != 'c'&& jawaban != 'd');

                if(jawaban == 'a'){
                    sum=32000;
                    printf("selamat anda mendapatkan poin %d\n", sum);
                    total += sum;
                    printf("total poin yang anda peroleh adalah : %d\n\n", total);
                    break;
                }else{
                    printf("jawaban anda salah, yang benar adalah A. Mars\n");
                    total=total/2;
                    printf("total poin yang anda peroleh adalah : %d\n\n", total);
                    break;
                }
            case 12 :
                printf("12) Julukan kota pelajar ?\n");
                printf(" a. Semarang\n b. Makassar\n c. Medan\n d. Yogyakarta\n");

                do{
                    printf("jawaban anda : ");
                    scanf(" %c", &jawaban);
                    jawaban = tolower(jawaban);
                }while(jawaban != 'a' && jawaban != 'b' && jawaban != 'c'&& jawaban != 'd');

                if(jawaban == 'd'){
                    sum=61000;
                    printf("selamat anda mendapatkan poin %d\n", sum);
                    total += sum;
                    printf("total poin yang anda peroleh adalah : %d\n\n", total);
                    break;
                }else{
                    printf("jawaban anda salah, yang benar adalah D. Yogyakarta\n");
                    total=total/2;
                    printf("total poin yang anda peroleh adalah : %d\n\n", total);
                    break;
                }
            case 13 :
                printf("13) Mata uang negara Chili ?\n");
                printf(" a. Peso\n b. Dolar\n c. Rupiah\n d. Yen\n");

                do{
                    printf("jawaban anda : ");
                    scanf(" %c", &jawaban);
                    jawaban = tolower(jawaban);
                }while(jawaban != 'a' && jawaban != 'b' && jawaban != 'c'&& jawaban != 'd');

                if(jawaban == 'a'){
                    sum=125000;
                    printf("selamat anda mendapatkan poin %d\n", sum);
                    total += sum;
                    printf("total poin yang anda peroleh adalah : %d\n\n", total);
                    break;
                }else{
                    printf("jawaban anda salah, yang benar adalah A. Peso\n");
                    total=total/2;
                    printf("total poin yang anda peroleh adalah : %d\n\n", total);
                    break;
                }
            case 14 :
                printf("14) Penyanyi lagu Cheating on You ?\n");
                printf(" a. Justin Bieber\n b. Shawn Mendes\n c. Charlie Puth\n d. Bruno Mars\n");

                do{
                    printf("jawaban anda : ");
                    scanf(" %c", &jawaban);
                    jawaban = tolower(jawaban);
                }while(jawaban != 'a' && jawaban != 'b' && jawaban != 'c'&& jawaban != 'd');

                if(jawaban == 'c'){
                    sum=250000;
                    printf("selamat anda mendapatkan poin %d\n", sum);
                    total += sum;
                    printf("total poin yang anda peroleh adalah : %d\n\n", total);
                    break;
                }else{
                    printf("jawaban anda salah, yang benar adalah C. Charlie Puth\n");
                    total=total/2;
                    printf("total poin yang anda peroleh adalah : %d\n\n", total);
                    break;
                }
            case 15 :
                printf("15) Tahun berapa brand Apple pertama kali didirikan ?\n");
                printf(" a. 1875\n b. 1876\n c. 1975\n d. 1976\n");

                do{
                    printf("jawaban anda : ");
                    scanf(" %c", &jawaban);
                    jawaban = tolower(jawaban);
                }while(jawaban != 'a' && jawaban != 'b' && jawaban != 'c'&& jawaban != 'd');

                if(jawaban == 'd'){
                    sum=500000;
                    printf("selamat anda mendapatkan poin %d\n", sum);
                    total += sum;
                    uang =total*1000;
                    if(uang==1000000000){
                        printf("SELAMAT ANDA MERUPAKAN SEORANG MILLIONAIRE!!!\n");
                        printf("Total poin yang anda peroleh adalah : %d\n", total);
                        printf("Anda berha membawa uang sebesar : Rp.%d\n",uang);
                        printf("yuhuuuuu......\n");
                        break;
                    }else{
                        printf("total poin yang anda peroleh adalah : %d\n", total);
                        printf("selamat anda membawa uang sebesar : Rp.%d\n",uang);
                        break;
                    }
                }else{
                    printf("jawaban anda salah, yang benar adalah D. 1976\n");
                    total=total/2;
                    uang =total*1000;
                    printf("total poin yang anda peroleh adalah : %d\n", total);
                    printf("selamat anda membawa uang sebesar : Rp.%d\n", uang);
                    break;
                }

                        
        }
    }
    
    return total;
}

int main(int argc, char *argv[]){


    if((argc==2)&&((strcmp(argv[1],"SignUp"))==0)){
        
        FILE *fw= fopen("login.bin","wb");
            char login[30];
            printf("====Daftarkan Akun Anda====\n");
            printf("cara memasukkan usernamne dan password : 'username@password'\n");
            printf("masukkan username dan password :");
            scanf(" %[^\n]", login);

            fwrite(login,sizeof(char),sizeof(login)/sizeof(char),fw);

            fclose(fw);
            printf("cara login : ./FileAplikasiProgramUtama username password");
    }if((argc==2)&&((strcmp(argv[1],"SignUp")) != 0)){
        printf("\nDaftarkan username dan password anda jika belum punya akun\n");
        printf("cara daftar akun : ./FileAplikasiProgramUtama SignUp\n");
    }

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

            char username[20], password[20];
            strcpy(username, kalimat[0]);
            strcpy(password, kalimat[1]);

    if((argc==3)&&((((strcmp(argv[1], username))==0))&&((strcmp(argv[2], password))==0))){//ketika berhasil login
        printf("anda berhasil login\n");
        int pilihan;
        char yorn;
        do{
            printf("+---------------------------------------+\n");
            printf("|\tWho Want to be a Millionaire\t|\n");
            printf("+---------------------------------------+\n");
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
                    printf("Maaf, Input yang Anda Masukkan Tidak Sesuai!\n\n");
                }
            }while(!(pilihan==1||pilihan==2||pilihan==3));

            if(pilihan == 1){
                //disini akan dimunculkan Peraturan GAME
                FILE *UU = fopen("undang2.txt", "r");

                if((UU)==NULL){
                    printf("gagal membuka file peraturan game");
                    return EXIT_FAILURE;
                }

                int c;
                while((c=fgetc(UU)) != EOF){
                    printf("%c",c);
                }
                printf("\n");

                fclose(UU);
                
                printf("Tekan Enter untuk Melanjutkan...");getchar();
            }else if(pilihan == 2){
                //disini GAMEnya akan dimulai
                printf("=======Who Want to be a Millionaire=======\n\n");
                soal();

                printf("Tekan Enter untuk Melanjutkan...");getchar();

            }else if(pilihan == 3){
                do{
                    //program akan mengkonfirmasi yes or no (y/n) jika memilih menu 3
                    printf("Apakah Anda yakin ngin Keluar dari Game(y/n)? "); scanf(" %c", &yorn);
                    yorn = tolower(yorn);
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

        printf("========semoga hari anda menyenangkan========");
    }if((argc==3)&&((((strcmp(argv[1], username)) != 0))||((strcmp(argv[2], password)) != 0))){// ga berhasil login
        printf("anda gagal login, silahkan cek username dan password anda!\n");
    }if(argc < 2 || argc > 3){
        printf("anda gagal masuk program\n");
        printf("cara daftar akun : ./FileAplikasiProgramUtama SignUp\n");
        printf("cara login : ./FileAplikasiProgramUtama username password");
    }
    
    
    return 0;
}
