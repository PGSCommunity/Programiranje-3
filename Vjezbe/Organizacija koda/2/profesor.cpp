#include "profesor.h"

Profesor::Profesor(string _ime) : Osoba(_ime) {}

void Profesor::opisPosla() {
    cout << ime << " je profesor!\n";
}