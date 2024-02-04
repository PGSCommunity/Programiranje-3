#include "osoba.h"

Osoba::Osoba(string i) {
	ime = i;
}

void Osoba::opisPosla() {
	cout << ime << " nesto radi!\n";
}

void Osoba::predstavljanje() {
	cout << "Predstavljamo zanimanja!\n";
	opisPosla();
}
