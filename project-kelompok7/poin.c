#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void mulai();
void soal1();
void soal2();
void soal3();
void soal4();
void soal5();
void soal6();
void soal7();
void soal8();
void soal9();
void soal10();

char jwb[1];


void mulai()
{
    {
        soal1();
        if (jwb[0] == 'D' || jwb[0] == 'd')
        {
            printf("Jawaban anda benar, selamat anda mendapatkan uang Rp.2000000\n");
            printf("Tekan enter untuk melanjutkan");
            getch();
            system("cls");
        }
        else
        {
            salah();
            printf("Mohon maaf Anda tidak membawa pulang uang\n");
            printf("Tekan enter untuk melanjutkan");
            system("cls");
            tampilkan_menu();
        }
        getch();
    }
    {
        soal2();
        if (jwb[0] == 'A' || jwb[0] == 'a')
        { 
            printf("Jawaban anda benar, selamat anda mendapatkan uang Rp.4000000\n");
            printf("Tekan enter untuk melanjutkan");
            getch();
            system("cls");
        }
        else
        {
            salah();
            printf("Selamat Anda membawa pulang uang sebesar Rp.2000000\n");
            printf("Tekan enter untuk melanjutkan");
            getch();
            system("cls");
            tampilkan_menu();
        }
        getch();
    }
    {
        soal3();
        if (jwb[0] == 'A' || jwb[0] == 'a')
        { 
            printf("Jawaban anda benar, selamat anda mendapatkan uang Rp.8000000\n");
            printf("Tekan enter untuk melanjutkan");
            getch();
            system("cls");
        }
        else
        {
            salah();
            printf("Selamat Anda membawa pulang uang sebesar Rp.4000000\n");
            printf("Tekan enter untuk melanjutkan");
            getch();
            system("cls");
            tampilkan_menu();
        }
        getch();
    }
    {
        soal4();
        if (jwb[0] == 'A' || jwb[0] == 'a')
        { 
            printf("Jawaban anda benar, selamat anda mendapatkan uang Rp.16000000\n");
            printf("Tekan enter untuk melanjutkan");
            getch();
            system("cls");
        }
        else
        {
            salah();
            printf("Selamat Anda membawa pulang uang sebesar Rp.8000000\n");
            printf("Tekan enter untuk melanjutkan");
            getch();
            system("cls");
            tampilkan_menu();
        }
        getch();
    }
    {
        soal5();
        if (jwb[0] == 'A' || jwb[0] == 'a')
        { 
            printf("Jawaban anda benar, selamat anda mendapatkan uang Rp.32000000\n");
            printf("Tekan enter untuk melanjutkan");
            getch();
            system("cls");
        }
        else
        {
            salah();
            printf("Selamat Anda membawa pulang uang sebesar Rp.16000000\n");
            printf("Tekan enter untuk melanjutkan");
            getch();
            system("cls");
            tampilkan_menu();
        }
        getch();
    }
    {
        soal6();
        if (jwb[0] == 'A' || jwb[0] == 'a')
        { 
            printf("Jawaban anda benar, selamat anda mendapatkan uang Rp.64000000\n");
            printf("Tekan enter untuk melanjutkan");
            getch();
            system("cls");
        }
        else
        {
            salah();
            printf("Selamat Anda membawa pulang uang sebesar Rp.32000000\n");
            printf("Tekan enter untuk melanjutkan");
            getch();
            system("cls");
            tampilkan_menu();
        }
        getch();
    }
    {
        soal7();
        if (jwb[0] == 'A' || jwb[0] == 'a')
        { 
            printf("Jawaban anda benar, selamat anda mendapatkan uang Rp.125000000\n");
            printf("Tekan enter untuk melanjutkan");
            getch();
            system("cls");
        }
        else
        {
            salah();
            printf("Selamat Anda membawa pulang uang sebesar Rp.64000000\n");
            printf("Tekan enter untuk melanjutkan");
            getch();
            system("cls");
            tampilkan_menu();
        }
        getch();
    }
    {
        soal8();
        if (jwb[0] == 'A' || jwb[0] == 'a')
        { 
            printf("Jawaban anda benar, selamat anda mendapatkan uang Rp.250000000\n");
            printf("Tekan enter untuk melanjutkan");
            getch();
            system("cls");
        }
        else
        {
            salah();
            printf("Selamat Anda membawa pulang uang sebesar Rp.125000000\n");
            printf("Tekan enter untuk melanjutkan");
            getch();
            system("cls");
            tampilkan_menu();
        }
        getch();
    }
    {
        soal9();
        if (jwb[0] == 'A' || jwb[0] == 'a')
        { 
            printf("Jawaban anda benar, selamat anda mendapatkan uang Rp.500000000\n");
            printf("Tekan enter untuk melanjutkan");
            getch();
            system("cls");
        }
        else
        {
            salah();
            printf("Selamat Anda membawa pulang uang sebesar Rp.250000000\n");
            printf("Tekan enter untuk melanjutkan");
            getch();
            system("cls");
            tampilkan_menu();
        }
        getch();
    }
    }
        soal10();
        if (jwb[0] == 'B' || jwb[0] == 'b')
        {
            printf("Selamat Anda menjadi Milyarder\n");
            printf("Anda membawa pulang uang sebesar Rp.1.000.000.000\n");
            printf("Tekan enter untuk melanjutkan\n");
            getch();
            system("cls");
            tampilkan_menu();
        }
        else
        {
            salah();
            printf("Selamat Anda membawa pulang uang sebesar Rp.500000000\n");
            printf("Tekan enter untuk melanjutkan");
            getch();
            tampilkan_menu();
        }
        getch();
    }
}

void salah();
{
    {
    print("Jawaban Anda salah\n");
    }
    getch();
}

