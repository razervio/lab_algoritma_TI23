#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <iomanip>
#include <cstdio>
#include <conio.h>
using namespace std;

//void gotoxy(int x, int y){
//COORD coord;
//coord.X=x;
//coord.Y = y;
//SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);}

int main()
{
int i,menu;
struct
{
char nama[20],lagi; //untuk memasukan anam barang
int a,b,c;
float nilaiakhir,ket; //untukk memasukan niali akhir
}barang[5];

atas:
//system("cls");
cout << "\t\t\t INPUT PENJUALAN BARANG " << endl; //meng output "INPUT PENJUALAN BARANG"
cout << "\t\t\t _______________________" << endl; //memberi garis cover atas

cout<<" Masukan Input Jumlah Barang : "; //meng output "Masukan Input Jumlah Barang"
cin>>menu;
cout<<endl;

for (i=1;i<=menu;i++)
{
cout<<" Data Penjualan Barang Ke – " <<i<<endl;
cout<<" Nama Barang : " ;
cin>>barang[i].nama;  //menampilkan nama barang
cout <<" Data tahun 2001 " << endl;
cout<<" Jumlah Penjualan : ";
cin>>barang[i].a; // menampilakn barang 2001
cout << " Data tahun 2002 " << endl;
cout<<" Jumlah Penjualan : ";
cin>>barang[i].b; // menampilkan barang 2002
cout << " Data tahun 2003 " << endl;
cout<<" Jumlah Penjualan : ";
cin>>barang[i].c; // menampilkan barang 2003
cout<<endl;
}

//system("cls");
cout<<endl;
cout<<endl;
cout<<" HASIL PENJUALAN BARANG"<<endl; // output "HASIL PENJUALAN BARANG"
cout<<"________________________________________________________________________________________________________"<<endl;
cout<<"__________________"<<endl;
cout<<"No. \tNama Barang \t\t2001 \t\t2002 \t\t\t2003"<<endl; // menggoutput susunan 2001-2002-2003
cout<<"________________________________________________________________________________________________________"<<endl;
cout<<endl<<endl;
for (i=1;i<=menu;i++){
	 cout<<i;
     cout<< "\t" << barang[i].nama;
	 cout<< "\t" <<barang[i].a;
     cout<< "\t" <<barang[i].b;
     cout<< "\t" <<barang[i].c<<endl;
}
cout<<endl;

cout<<"__________"<<endl;
cout<<"Input data lagi [Y]/[T]? :";
cin>>barang[i].lagi;
if(barang[i].lagi=='Y'||barang[i].lagi=='y') { //Y untuk mengulang, sedangkan T untuk tidak agar berhenti
goto atas;
}else{
//system("cls");
}
getch();

}

