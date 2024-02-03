#include "ucenik.h"

Ucenik::Ucenik(string i, string o) {
	ime = i;
	odjeljenje = o;
}

void Ucenik::Ispisi() {
	cout << "Ucenik " << ime << " je odjeljenje " << odjeljenje << ".\n";
}
