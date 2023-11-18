#include <iostream>
#include <cmath>
using namespace std;

class Valjak {
    private:
        double radijus, visina;
    public:
        double Zapremina();
};

double Valjak::Zapremina() {
    const double PI = 3.14;
    cout << "Unesite radijus valjka!\n";
    cin >> radijus;
    cout << "Unesite visinu valjka!\n";
    cin >> visina;
    return PI * pow(radijus, 2) * visina;
}

int main() {
    Valjak v1, v2;
    cout << v1.Zapremina() << '\n';
    cout << v2.Zapremina() << '\n';
    return 0;
}

/*
Deklarisati klasu Valjak.

Klasa treba imati:
- dvije clanske varijable (radijus i visinu) s pravom pristupa private.
- funkciju Zapremina bez parametara s pravom pristupa public koja kao rezultat vraca zapreminu.

U glavnoj funkciji treba:
- deklarisati dva objekta klase valjak
- pristupiti clanskim varijablama preko funkcije Zapremina i dodijeliti im neke vrijednosti
- izracunati zapreminu oba valjka pozivanjem funkcije i spremiti ih u neke varijable
- ispisati obje zapremine
*/