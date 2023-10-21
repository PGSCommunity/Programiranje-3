#include <iostream>
using namespace std;

class Vozilo {
    protected:
        double kilometraza;
    public:
        Vozilo(double k);
        void Zaglavlje();
};

Vozilo::Vozilo(double k) {
    kilometraza = k;
}

void Vozilo::Zaglavlje() {
    cout << "Najveca moguca prijedjenja kilkometraza auta je: " << kilometraza << '\n';
}

class SportskoAuto:public Vozilo {
    protected:
        string naziv;
        double prosjecna_brzina;
    public:
        SportskoAuto(double k, string n, double p):Vozilo(k) {
            naziv = n;
            prosjecna_brzina = p;
        }
        double IzracunajVrijeme();
        void Ispisi();
};

double SportskoAuto::IzracunajVrijeme() {
    return kilometraza / prosjecna_brzina;
}

void SportskoAuto::Ispisi() {
    cout << "Autu " << naziv << " treba " << IzracunajVrijeme() << " da bi dostigao najvecu mogucu prijedjenu kilometrazu od " << kilometraza << " ako stalno vozi brzinom " << prosjecna_brzina << '\n';
}

int main() {
    Vozilo v(3000);
    v.Zaglavlje();

    SportskoAuto sp(3000, "Lamborgini", 300);
    sp.Ispisi();
    return 0;
}

/*
Kreirati kasu Vozilo koja ima staticki atribut koji oznacava najvecu mogucu prijedjenu kilometrazu. Klasa ima
konstruktor, i metodu koja ispisuje zaglavlje za tu klasu. Kreirati klasu SportskoAuto koja nasljeduje klasu 
Vozilo te posjeduje parametre naziv i prosjecna_brzina. Napraviti metodu koja ce izracunavati koliko vremena treba
proci da bi automobil dostigao najvecu mogucu prijedjenu kilometrazu ako stalno vozi zadanom prosjecnom brzinom.
*/
