#include "maturant.h"

Maturant::Maturant(string ime, string odjeljenje, string p) : Ucenik(ime, odjeljenje) {
	predmetMaturskog = p;
} 

void Maturant::Ispisi() {
	cout << "Ucenik " << ime << " je odjeljenje " << odjeljenje << " i radi maturski rad iz predmeta " << predmetMaturskog << '\n';
}
