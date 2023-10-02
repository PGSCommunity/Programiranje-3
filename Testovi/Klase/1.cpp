#include <iostream>
#include <string>
using namespace std;

class Auto {
    public:
        string marka;
        string model;
        int godiste;
        void ispisi_marku(string marka);
        void ispisi_model(string model);
        void ispisi_godiste(int godiste);
};

void Auto::ispisi_marku(string marka) {
    cout << "Marka unesenog auta je: " << marka << '\n';
}

void Auto::ispisi_model(string model) {
    cout << "Model unesenog auta je: " << model << '\n';
}

void Auto::ispisi_godiste(int godiste) {
    cout << "Godiste unesenog auta je: " << godiste << '\n';
}

int main() {
    Auto auto1, auto2;

    auto1.marka = "Ferrari";
    auto1.model = "La Ferrari";
    auto1.godiste = 2012;

    cout << "Unesite marku 2. auta!\n";
    getline(cin, auto2.marka);

    cout << "Unesite model 2. auta!\n";
    getline(cin, auto2.model);

    cout << "Unesite godiste 2. auta!\n";
    cin >> auto2.godiste;

    cout << "Ispis podataka 1. auta:\n";
    auto1.ispisi_marku(auto1.marka);
    auto1.ispisi_model(auto1.model);
    auto1.ispisi_godiste(auto1.godiste);
    
    cout << endl;

    cout << "Ispis podataka 2. auta:\n";
    auto2.ispisi_marku(auto2.marka);
    auto2.ispisi_model(auto2.model);
    auto2.ispisi_godiste(auto2.godiste);
    return 0;
}
/*
Kreirati klasu Auto koja sadrzi tri atributa: marka, model i godiste, te tri metode: ispisi_marku(), ispisi_model(),
i ispisi_godiste() (zadatak metoda je omoguciti ispis vrijednosti koja je proslijedena iz glavne funkcije. Npr.
Prva funkcija bi trebala omoguciti ispis u formi "Marka unesenog automobila je _____")
U glavnoj funkciji formiraju se dva objekta nad klasom (auto1 i auto2). Pomocu prvog objekta kreator ovog programa
dodjeljuje proizvoljne vrijednosti atributima i omogucava ispis istih. Drugi objekt omogucava korisnicki unos
vrijednosti atributa, cije se vrijednosti prosljeduju u funkcije.
*/