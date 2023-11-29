#include "vozac.h"

Vozac::Vozac(string _ime) : Osoba(_ime) {}

void Vozac::opisPosla() {
    cout << ime << " je vozac!\n";
}

void Vozac::Predstavljanje() {
    cout << "Ovo zanimanje je dinamicno!\n";
    opisPosla();
}