#include <iostream>
#include "cetverocifreni.h"

int main(int argc, char** argv) {
	Cetverocifreni c;
	c.Unos();
	c.Tablica();
	cout << "Faktorijel unesenog broja je: " << c.Faktorijel() << '\n';
	cout << "Suma parnih cifara ucitanog broja je: " << c.sumaParnih() << '\n';
	return 0;
}

/*
1. Napisati program koji za ucitani cetverocifreni broj N racuna i ispisuje:
	- tablicu množenja za taj broj
	- faktorijel ucitanog broja 
	- sumu parnih cifara ucitanog broja 
*/
