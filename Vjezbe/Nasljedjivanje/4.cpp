#include <iostream>
using namespace std;

class Ucenik {
    protected:
        string ime, odjeljenje;
    public:
        Ucenik(string i, string o);
        void Ispisi();
};

Ucenik::Ucenik(string i, string o) {
    ime = i;
    odjeljenje = o;
}

void Ucenik::Ispisi() {
    cout << "Ucenik " << ime << " je u odjeljenju " << odjeljenje << '\n';
}

class Maturant:public Ucenik {
    protected:
        string predmet_maturskog;
    public:
        Maturant(string ime, string odjeljenje, string pred_mat):Ucenik(ime, odjeljenje) {
            predmet_maturskog = pred_mat;
        }
        void Ispisi();
};

void Maturant::Ispisi() {
    cout << "Ucenik " << ime << " je u odjeljenju " << odjeljenje << " i radi maturski rad iz predmeta " << predmet_maturskog << '\n';
}

int main() {
    Ucenik u1("Mickey Mouse", "III-f");
    u1.Ispisi();

    Maturant u2("Paja Patak", "IV-f", "Programiranje");
    u2.Ispisi();
    return 0;
}

/*
Napraviti klasu Ucenik sa vrijednostima ime i odjeljenje koji su zasticeni. U javnom dijelu napraviti konstruktor
kojem se dijele vrijednosti i metodu Ispisi() koja ispisuje vrijednosti klase. Zatim napraviti klasu Maturant
koji nasljedjuje klasu Ucenik, a ima dodatnu zasticenu varijablu predmet_maturskog. Treba napraviti konstruktor
u Maturant klasi koja nasljedjuje vrijednosti Ucenik konstruktora, a jos se treba dodijeliti i vrijednost varijable
predmet_maturksog. U glavnoj funkciji treba napraviti objekte i pozivati metode.
*/
