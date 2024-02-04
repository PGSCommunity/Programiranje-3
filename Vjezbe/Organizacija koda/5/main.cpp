#include <iostream>
#include "savrsen.h"
#include "nzd.h"
using namespace std;

int main(int argc, char** argv) {
	Savrsen s;
	s.unos();
	if (s.isSavrsen()) {
		cout << "Broj je savrsen!\n";
	} else {
		cout << "Broj nije savrsen!\n";
	}
	
	NZD n;
	n.unos();
	n.nzd();
	return 0;
}

/*
Napisati program koji za ucitani broj ispisuje da li je on savrsen, 
potom za dva ucitana broja pronalazi i ispisuje njihov NZD.
Program treba da se sastoji od dvije klase sa po dvije metode ( unos i proracun) 
*/
