#include<stdio.h>

char ganti_karakter(char *, char, char);

int main(){
  char string[255];
  char find;
  char replace;

  printf("masukkan sebuah string :");
  scanf(" %[^\n]", string);

  printf("karakter yang dicari :");
  scanf(" %c", &find);

  printf("karakter pengganti :");
  scanf(" %c", &replace);



  ganti_karakter(string, find, replace);

  return 0;
}

char ganti_karakter(char *string,char find, char replace){
char kalimat;
string[0];
  do{
		kalimat=*string;
		if (kalimat==find){
			*string=replace;
		printf("%c", *string);
		}else{
		printf("%c", *string);
		}
    string++;
	}while(*string!='\0');
	
}
