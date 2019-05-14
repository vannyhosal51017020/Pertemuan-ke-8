#include <iostream.h>
#include <conio.h>
main () {
  int pil;

menu :
cout<<"MENU : ";
cout<<"\n[1] Tambah";
cout<<"\n[2] Kurang";
cout<<"\n[3] Kali";
cout<<"\n[4] Bagi";
cout<<"\n[5] Modulo";

cout<<"\nInput pilihan : ";
cin>>pil;

if (pil==1)
    {int a,b,c,jawab;
     cout<<"input angka 1 : "; cin>>a;
     cout<<"input angka 2 : "; cin>>b;
     c=a+b;
     cout<<"Hasil jumlahnya : " <<c;
     cout<<"\nIngin kembali ke menu ?"; cin>>jawab;
     if(jawab==1)
      {clrscr();
       goto menu;}
     else if(jawab==0)
       cout<<"Makasih";}
getch();}
