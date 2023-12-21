#include <iostream>
using namespace std;
int main(){
	float a, b,c, d, e;
	cout<<"Menghitung luas lingkaran\n=========================";
	cout<<"\nMasukan jari-jari: ";
	cin>>a;
	b=3.14;
	c=a*a*b;
	cout<<"\nLuas lingkaran: "<<c<<"cm^2"
	<<endl;

	cout<<"\nMenghitung luas lingkaran\n=============================";
	cout<<"\nMasukan jari-jari: ";
	cin>>a;
	b=3.14;
	c=a*a*b;
	cout<<"Luas lingkaran: "<<c<<"cm^2"
	<<endl;
		
	cout<<"\nMenghitung volume tabung\n=============================";
	cout<<"\nMasukan jari-jari: ";
	cin>>a;
	cout<<"\nMasukan tinggi: ";
	cin>>d;
	e=a*a*b*d;
	cout<<"volume tabung: "<<e<<"cm^3";
	
	cout<<"\nMenghitung volume tabung\n=============================";
	cout<<"\nMasukan jari-jari: ";
	cin>>a;
	cout<<"\nMasukan tinggi: ";
	cin>>d;
	e=a*b*d;
	cout<<"volume tabung: "<<e<<"cm^3";
	
}
