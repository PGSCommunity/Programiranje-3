#include "osoba.h"

Osoba::Osoba(string _ime) {
    ime = _ime;
}

void Osoba::opisPosla() {
    cout << ime << " nesto radi!\n";
}

void Osoba::Predstavljanje() {
    cout << "Predstavljamo zanimanja!\n";
    opisPosla();
}