#include "maturant.h"

Maturant::Maturant(string ime, string odjeljenje, string predMat) : Ucenik(ime, odjeljenje) {
    predmetMaturskog = predMat;
}

void Maturant::Ispisi() {
    cout << "Ucenik " << ime << " je " << odjeljenje << " odjeljenje i radi maturski rad iz predmeta " << predmetMaturskog << '\n';
}