#include <iostream>
#include <string>
using namespace std;

class Skola {
    public:
        string naziv_skole(string naziv);
        string mjesto(string mjesto);
        int broj_ucenika(int broj);
};

string Skola::naziv_skole(string naziv) {
    return naziv;
}

string Skola::mjesto(string mjesto) {
    return mjesto;
}

int Skola::broj_ucenika(int broj) {
    return broj;
}

int main() {
    Skola s1, s2;
    string naziv1, mjesto1;
    int broj1;

    naziv1 = "Prva Gimnazija";
    mjesto1 = "Gimnazijska Ulica";
    broj1 = 300;

    cout << "Ispis podataka 1. skole:\n";
    cout << "Naziv: " << s1.naziv_skole(naziv1) << '\n';
    cout << "Mjesto: " << s1.mjesto(mjesto1) << '\n';
    cout << "Broj ucenika: " << s1.broj_ucenika(broj1) << '\n';

    cout << endl << endl;

    string naziv2, mjesto2;
    int broj2;

    cout << "Unesite naziv skole!\n";
    getline(cin, naziv2);
    cout << "Unesite mjesto skole!\n";
    getline(cin, mjesto2);
    cout << "Unesite broj ucenika u skoli!\n";
    cin >> broj2;

    cout << "Ispis podataka 2. skole:\n";
    cout << "Naziv: " << s2.naziv_skole(naziv2) << '\n';
    cout << "Mjesto: " << s2.mjesto(mjesto2) << '\n';
    cout << "Broj ucenika: " << s2.broj_ucenika(broj2) << '\n';
    return 0;
}
/*
Koristeci OOP , napisati program pomoću kojeg se deklariše klasa sa tri atributa. Naziv Klase je “Skola“ a metoda: 
naziv_skole, mjesto i broj_ucenika. Atributima prve škole se dodjeljuju vrijednosti, a a vrijednosti atributa 
druge škole određuje (unosi) korisnik programa.
Program treba ispisati vrijednosti atributa u oba slučaja.
*/