#include <iostream>
using namespace std;

struct mhs{
	char nama[20], nim[10], matkul[15];
	int sks;
};

struct mhs bayar[2];

int main(){
	int bts,var,tetap,d;
	cout<<"Berapa data yang ingin di masukan ? ";
	cin>>d;
	for(int i=0; i<d; i++){
		//input data
		cout<<"\n\n---------------------------\n";
		cout<<"\nNama Mahasiswa\t\t= ";
		cin>>bayar[i].nama;
		cout<<"NIM Mahasiswa\t\t= ";
		cin>>bayar[i].nim;
		cout<<"Mata Kuliah Mahasiswa\t= ";
		cin>>bayar[i].matkul;
		cout<<"Jumlah SKS Mahasiswa\t= ";
		cin>>bayar[i].sks;
	}
	
	cout<<"\n\n-----------------------\n";
	cout<<"\tOutput";
	cout<<"\n-----------------------\n";
	
	for(int i=0; i<d; i++){
		//Output data
		cout<<"\nNama Mahasiswa\t\t= "<<bayar[i].nama<<endl;
//		cin>>bayar[i].nama;
		cout<<"NIM Mahasiswa\t\t= "<<bayar[i].nim<<endl;
//		cin>>bayar[i].nim;
		cout<<"Mata Kuliah Mahasiswa\t= "<<bayar[i].matkul<<endl;
//		cin>>bayar[i].matkul;
		cout<<"Jumlah SKS Mahasiswa\t= "<<bayar[i].sks<<endl;
//		cin>>bayar[i].sks;
	}
}
