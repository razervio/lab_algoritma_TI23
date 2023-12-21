#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
	
	int k, l;
	char lagi;
	
	atas :
//	clrscr();
	cout<<"\nMasukan Bilangan = ";
	cin>> k;
	
	l = k % 2;
	
	printf("Nilai %d %% 2 adalah = %d",k,l);
	printf("\n\nIngin Hitung Lagi [Y/T] : ");
	
	lagi = getche();
	
	if (lagi == 'Y' || lagi == 'y')
	goto  atas;
	
	getch();
	
}
