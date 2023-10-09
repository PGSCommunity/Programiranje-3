#include <iostream>
#include <string>
using namespace std;

class Auto {
    public:
        string brend;
        string model;
        int godiste;
        Auto(string x, string y, int z);
};

Auto::Auto(string x, string y, int z) {
    brend = x;
    model = y;
    godiste = z;
}

int main() {
    string brend, model;
    int godiste;

    cout << "Unesite brend auta!\n";
    getline(cin, brend);

    cout << "Unesite model auta!\n";
    getline(cin, model);

    cout << "Unesite godiste auta!\n";
    cin >> godiste;

    Auto a1("Ferrari", "LaFerrari", 2016), a2(brend, model, godiste);

    cout << "Ispis podataka 1. auta:\n";
    cout << "Brend: " << a1.brend << '\n';
    cout << "Model: " << a1.model << '\n';
    cout << "Godiste: " << a1.godiste << '\n';
    cout << endl;

    cout << "Ispis podataka 2. auta:\n";
    cout << "Brend: " << a2.brend << '\n';
    cout << "Model: " << a2.model << '\n';
    cout << "Godiste: " << a2.godiste << '\n';
    
    return 0;
}
/*
Deklarisati klasu Auto sa varijablama brend, model i godiste. Unutar klase treba da se napravi konstruktor koji
sadrzi vrijednosti deklariranih varijabli, pa da se u glavnoj funkciji deklarisu dva objekta, jedan koji korisnik
definira po zelji, a drugi treba korisnik treba da unese.
*/