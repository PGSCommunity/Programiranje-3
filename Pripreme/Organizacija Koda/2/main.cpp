#include <iostream>
#include "trougao.h"
#include "piramida.h"

int main(int argc, char** argv) {
	Trougao t(3, 5);
	cout << "Povrsina jednakokrakog trougla iznosi: " << t.povrsina() << '\n';
	
	Piramida p;
	cout << "Povrsina pravilne sestostrane piramide iznosi: " << p.povrsina() << '\n';
	return 0;
}

/*
2. Napisati program koji racuna povrsine jednakokrakog rougla i pravilne sestostrane piramide
Parametri potrebni za proracune su konstante. U OOP te konstante su definirane kroz konstruktor.
*/
