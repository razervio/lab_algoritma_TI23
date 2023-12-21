#include <iostream>
using namespace std;

void cek(int *c){
	int r = *c % 2;
	if(r == 0){
		*c = *c + 1;
		cout << *c << " ";
	}
}

int main(){
	int t, p, *d;
	d = &p;
	cout << "Masukan Bilangan = ";
	cin >> p;
	t = p;
	cout << p << " ";
	cek(&p);
	t = p;  // Tambahkan perubahan nilai t
	cout << t << " " << *d;
	return 0;
}
