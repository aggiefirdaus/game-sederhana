#include <stdio.h>
#include <conio.h>

void main()
{
char word[25]={'i','n','f','o','r','m','a','t','i','k','a'};
char kata[25];
char kunci[20]={'k','i','t','a',' ','j','u','r','u','s','a','n'};
int x,y,hitung=0,salah=0,c,true;
char tebak;

hitung=0;
salah=0;
//clrscr();
printf("\n\n\t\t<<<< GAME TEBAK KATA >>>>\n\n");
printf("\nPERATURAN :\n");
printf("Kesalahan hanya diberikan 3 kali kalau melebihi dinyatakan kalah\n");
printf("\nKata Kunci      :");
for(x=0;x<12;x++)
{
printf("%c",kunci[x]);
}
printf("\n");

printf("\nTampilan Awal   :");
for(y=0;y<11;y++)
{
kata[y]='*';
printf("%c",kata[y]);
fflush(stdin);
}

for(y=0;y<11;y++)
{
printf("\n\nTebak huruf ke %d:",y+1);
scanf("%c",&tebak);
fflush(stdin);
hitung=0;
for(c=0;c<11;c++)
{
if(tebak==word[c])
{
kata[c]=tebak;
hitung++;
}
}

printf("tampilan : ");
if(hitung<1)
{
salah++;
for(x=0;x<11;x++)
{
printf("%c",kata[x]);
}
printf("\n\n>>> Elo Salah! <<<\njumlah kesalahan = %d",salah);
}
else
{
for(x=0;x<11;x++)
{
printf("%c",kata[x]);  }
printf("\n\n>>> Good Job! <<<\njumlah kesalahan = %d",salah);
}

{ if(salah>2)
{
printf("\n\n\n\n<< MAAF KESEMPATAN ANDA SUDAH HABIS >>");
printf("\n\n\n====================kalah yaa kasihan.....!!!====================");
break;
}
true=1;
for(c=0;c<11;c++)
{
if(kata[c]!=word[c])

true=0;
}
}
if(true>0)
{
printf("\n\n\n\n<< SELAMAT ANDA MENDAPATKAN 10 JUTA >>");
printf("\n\n\n-------------------Congrulation-----------------");
break;
}
printf("\n\n");
}
}
