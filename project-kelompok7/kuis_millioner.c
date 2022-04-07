#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void mulai();
void tentang();
void tampilkan_menu();
void salah();
void garis();
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

int main()
{

    printf("********************QUIZ MILLIONER********************");
    printf("********************Selamat Datang*******************");
    tampilkan_menu();
    system("cls");
    return 0;
    }

void tampilkan_menu()
    {
    int pil;
    printf("+---------------------------------------+\n");
    printf("|\tWho Want to be a Millioner\t|\n");
    printf("|\t\t\t\t\t|\n");
    printf("| 1. Tentang Game\t\t\t|\n");
    printf("| 2. Start Game\t\t\t\t|\n");
    printf("| 3. Keluar\t\t\t\t|\n");
    printf("|\t\t\t\t\t|\n");
    printf("+---------------------------------------+\n");

    printf("Pilihan Anda : ");
    scanf("%d", &pil);
    system("cls");

        switch (pil)
        {
        case 1:
            tentang();
            getch();
            system("cls");
            tampilkan_menu();
            break;
        case 2:
            printf("Selamat Datang di Quiz Millioner\n");
            printf("Semoga Anda Beruntung");
            getch();
            system("cls");
            mulai();
            break;
        case 3:
            printf("Terima kasih telah menggunakan permainan ini\n");
            getch();
            exit(0);
            break;
        default:
            printf("Maaf input Anda tidak sesuai\n");
            printf("Silahkan masukkan ulang pilihan Anda");
            tampilkan_menu();
            break;
        }
        getch();
}

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
    {
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


void soal1()

{
    printf("1. \n");
    garis();
    printf("A. \n");
    printf("B. \n");
    printf("C. \n");
    printf("D. \n");
    printf("Jawaban Anda ? [A/B/C/D] : "); scanf("%s", jwb[0]);
}

getch();

void soal2()

{
    printf("2. \n");
    garis();
    printf("A. \n");
    printf("B. \n");
    printf("C. \n");
    printf("D. \n");
    printf("Jawaban Anda ? [A/B/C/D] : "); scanf("%s", jwb[0]);
}

getch();

void soal3()

{
    printf("3. \n");
    garis();
    printf("A. \n");
    printf("B. \n");
    printf("C. \n");
    printf("D. \n");
    printf("Jawaban Anda ? [A/B/C/D] : "); scanf("%s", jwb[0]);
}
getch();

void soal4()

{
    printf("4. \n");
    garis();
    printf("A. \n");
    printf("B. \n");
    printf("C. \n");
    printf("D. \n");
    printf("Jawaban Anda ? [A/B/C/D] : "); scanf("%s", jwb[0]);
}
getch();

void soal5()

{
    printf("5. \n");
    garis();
    printf("A. \n");
    printf("B. \n");
    printf("C. \n");
    printf("D. \n");
    printf("Jawaban Anda ? [A/B/C/D] : "); scanf("%s", jwb[0]);
}
getch();

void soal6()

{
    printf("6. \n");
    garis();
    printf("A. \n");
    printf("B. \n");
    printf("C. \n");
    printf("D. \n");
    printf("Jawaban Anda ? [A/B/C/D] : "); scanf("%s", jwb[0]);
}
getch();

void soal7()

{
    printf("7. \n");
    garis();
    printf("A. \n");
    printf("B. \n");
    printf("C. \n");
    printf("D. \n");
    printf("Jawaban Anda ? [A/B/C/D] : "); scanf("%s", jwb[0]);
}
getch();

void soal8()

{
    printf("8. \n");
    garis();
    printf("A. \n");
    printf("B. \n");
    printf("C. \n");
    printf("D. \n");
    printf("Jawaban Anda ? [A/B/C/D] : "); scanf("%s", jwb[0]);
}
getch();

void soal9()

{
    printf("9. \n");
    garis();
    printf("A. \n");
    printf("B. \n");
    printf("C. \n");
    printf("D. \n");
    printf("Jawaban Anda ? [A/B/C/D] : "); scanf("%s", jwb[0]);
}
getch();

void soal10()

{
    printf("10. \n");
    garis();
    printf("A. \n");
    printf("B. \n");
    printf("C. \n");
    printf("D. \n");
    printf("Jawaban Anda ? [A/B/C/D] : "); scanf("%s", jwb[0]);
}
getch();
}

void salah();
{
    {
    printf("Jawaban Anda salah\n");
    }
    getch();
}

void garis();
{
    {
    printf("------------------------------------------------");
    }
    getch();
}

void tentang();
{
    {
    printf("Game terdiri dari bla bla bla\n");
    printf("Ahmad_20081070100\n");
    printf("Cut_20081070100\n");
    printf("Rahmi_20081070100\n");
    printf("Zulakhyar_20081070100\n");
    }
    getch();
}

     









