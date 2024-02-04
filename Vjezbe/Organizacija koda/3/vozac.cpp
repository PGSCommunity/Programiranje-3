#include "vozac.h"

Vozac::Vozac(string i) : Osoba(i) {}

void Vozac::opisPosla() {
	cout << ime << " je vozac!\n";
}

void Vozac::predstavljanje() {
	cout << "Ovo zanimanje je dinamicno!\n";
	opisPosla();
}
