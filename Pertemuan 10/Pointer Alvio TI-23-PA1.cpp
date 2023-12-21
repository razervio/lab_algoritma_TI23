#include <iostream>
using namespace std;

int pangkat(int x, int y){
	if( y == 1){
		return x;
	}else{
		return x * pangkat(x,y-1);
	}
	
}

int main (){
	int p, w;
	
	cout<<"Masukan Nilai P :";
	cin>>p;
	cout<<"Masukan Nilai W :";
	cin>>w;
	cout<<endl;
	cout<<p<<" Dipangkatkan "<<w<<" = "<<pangkat(p,w);
	
	return 0;
}
