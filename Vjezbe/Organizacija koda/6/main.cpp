#include <iostream>
#include "niz.h"
#include "matrica.h"

int main(int argc, char** argv) {
	Niz n;
	n.unos();
	n.SumaProizvod();
	
	Matrica m;
	m.unos();
	m.dijagonala();
	return 0;
}

/*
Sljedeci kod raspodijeli u pakete!
#include<iostream>
using namespace std;

class Niz{
	
			int n, s = 0, p = 1, a[100];
		
		public:	
		
		Niz();	
	void Unos();
	int SumaProizvod();
	
	
};

	Niz :: Niz(){
			cout  << "Unesi dimenziju niza\n";
	cin >> n;
				
	}

 void Niz :: Unos(){
 
	cout  << "Unesi clanove niza\n";
	for(int i = 0; i < n; i++){
		
		cin >> a[i];	
 	
 	 }
 }

 int Niz :: SumaProizvod(){
 
	for(int i = 0; i < n; i++){
		
		if (a[i]%2==0)s += a [i];
		if (a[i]%3!=0)p *= a [i];	
 	
 	 }
 	 	cout<<"Suma parnih brojeva niza je:\n"<<s<<"\nProizvod clanova niza koji nisu djeljivi sa 3 je:\n"<<p<<endl;
 	 }
 	 
 	 class Matrica{
		
			int m, SD = 0, Matrix[50][50];
			public:
		Matrica();	
	void Unos();
	int Dijagonala();
	
	
};

Matrica :: Matrica(){

cout  << "Unesi dimenziju matrice\n";
	cin >> m;
	
}
	
void Matrica :: Unos(){
 
cout  << "Unesi clanove matrice\n";
	for(int i = 0; i < m; i++){
		for(int j = 0; j < m; j++){
		cin >> Matrix[i][j];
 	
 	 }
 }
}

 int Matrica :: Dijagonala(){
 
	for(int i = 0; i < m; i++){
		for(int j = 0; j < m; j++){
		
		if (i==j) SD += Matrix[i][j];

	}
}
	cout<<"Suma elemenata matrice na glavnoj dijagonali je:\n"<<SD;
}
*/
