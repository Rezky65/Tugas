#include <iostream>
using namespace std;

int bin[6],X,Hasil;
int a=32;

int main(){
	system("color f0");
	for(X=0;X<6;X++){
		cout<<"Masukkan Nilai Biner : ";
		cin>>bin[X];
	}
	cout<<"Nilai Biner adalah : ";
	for(X=0;X<6;X++){
		cout<<bin[X]<<" ";
	}
	cout<<"\n";
	for(X=0;X<6;X++){
		Hasil=Hasil+bin[X]*a;
		a=a/2;
	}
	cout<<"Nilai Desimal = "<<Hasil;
}
