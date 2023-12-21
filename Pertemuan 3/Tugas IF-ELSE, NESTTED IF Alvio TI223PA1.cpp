#include<iostream>
using namespace std;
int main()
{
	char nama[40];
    int ns1,ns2,ns3,rr;
    cout<<"Operasi Nilai Rata-Rata"<<endl;
    cout<<" Nama Siswa: ";
    cin>>nama;
    cout<<"Hasil Nilai Pertandingan I: ";
    cin>>ns1;
    cout<<"Hasil Nilai Pertandingan II: ";
    cin>>ns2;
    cout<<"Hasil Nilai Pertandingan III: ";
    cin>>ns3;
    
    rr=(ns1 + ns2 + ns3)/3;
    
  if (rr > 0)

	if (rr >= 70 && rr <85){ 
		cout<<"Dari Hasil Perlombaan yang di ikutinya"<<endl;
		cout<<"\nSiswa yang Bernama "<<nama<<" Memperoleh Nilai Rata-Rata "<<rr;
		cout<<"Hadiah yang didapatkan adalah uang sebesar Rp 2.500.000!";
		} 

	else if (rr>85){
		cout<<"\nSiswa Bernama "<<nama<<"Memperoleh Nilai Rata-Rata "<<rr;
		cout<<"Dari Hasil Perlombaan yang diikutinya"<<endl;
		cout<<"Hadiah yang didapatkan adalah Processor Intel Core i5!"; 
		}
		
	else if (rr<70){
		cout<<"\nSiswa Bernama "<<nama<<" Memperoleh Nilai Rata-Rata "<<rr;
		cout<<"Dari Hasil Perlombaan yang diikutinya"<<endl;
		cout<<"Hadiah yang didapatkan adalah hiburan!";
		}

return 0;
}

