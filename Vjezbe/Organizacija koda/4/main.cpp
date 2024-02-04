#include <iostream>
#include "trocifreni.h"
using namespace std;


int main(int argc, char** argv) {
	Trocifreni t;
	t.unos();
	
	cout << "Suma cifarana unesenog broja je: " << t.suma() << '\n';
	cout << "Proizvod reciprocnih vrijednosti cifara unesenog broja je: " << t.reciprocna() << '\n';
	
	if (t.isArmstrong()) {
		cout << "Broj je Armstrongov!\n";
	} else {
		cout << "Broj nije Armstrongov!\n";
	}
	return 0;
}

/*
Napisati program koji ucitava trocifren broj.
Program treba da, koristeci OOP (jedna klasa i 4 metode), ispise sumu cifara, proizvod reciprocnih vrijednosti cifara i da li je 
broj Armstrongov
*/
