#include <iostream>
#include <time.h>
#include <stdlib.h>
#include<Windows.h>
#include <conio.h>

using namespace std;

int main()
{
char nama[30];
int angka, tebak, n=0;
char lagi;

 menu:
 system ("cls");
 srand(time(0));
 angka=1+(rand()%10);

   cout<<"masukan nama anda : ";
    cin>>nama;
    cout<<endl;
    cout<<"Hay "<<nama<<endl;
     cout<<"masukan angka yang anda tebak :";

 getch();
 do{
  n++ ;
  cin>>tebak;
  if(tebak<angka){ cout<< "angka yang anda terlalu kecil kawan  \n";
  }else if (tebak>angka) {cout<<"angka yang anda terlalu besar \n";
  }else{ cout<<"Hore Anda benar... \n";}

 } while(tebak!=angka);
    string hail [1000] =
    {
        "Anda beruntung","Anda cerdas","Anda hebat","anda pintar","yaah anda kurang beruntung",
        "masa sih salah terus  ","kelamaan ","heemmm ","gimana cuma nebak ajah salah terus","makanya keberuntungan itu perlu"
    };


 cout<<"Anda bisa menebak pikiran saya ! anda telah menebak sebanyak "<<n<< "kali.\n";\
  cout<< hail[n]<<endl;
             cout<< "Mau coba  lagi  [y/t]? ";cin>>lagi;

   if (lagi == 'y')
    {
            goto menu;
            }else
    {
   cout<<"terserah mau tekan mana aja untuk keluar";
    }

      cout << " break.";
 return 0;

}
