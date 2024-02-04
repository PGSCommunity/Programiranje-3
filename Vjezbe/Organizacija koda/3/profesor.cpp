#include "profesor.h"

Profesor::Profesor(string i) : Osoba(i) {}

void Profesor::opisPosla() {
	cout << ime << " je profesor!\n";
}

void Profesor::predstavljanje() {
	cout << "Ovo zanimanje je zanimljivo!\n";
	opisPosla();
}
