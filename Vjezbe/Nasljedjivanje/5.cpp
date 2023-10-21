#include <iostream>
#include <cmath>
using namespace std;

class GeometrijskiLik {
    protected:
        string naziv;
    public:
        void Ispisi();
};

void GeometrijskiLik::Ispisi() {
    cout << "Ime geometrisjkog lika je: " << naziv << '\n';
}

class Krug:public GeometrijskiLik {
    protected:
        const double pi = 3.14;
        double r;
    public:
        Krug(double r);
        double IzracunajPovrsinu();
        double IzracunajObim();
        void Ispisi();
};

Krug::Krug(double r) {
    this->r = r;
    naziv = "Krug!";
}

double Krug::IzracunajPovrsinu() {
    return pow(r, 2) * pi;
}

double Krug::IzracunajObim() {
    return 2 * r * pi;
}

void Krug::Ispisi() {
    GeometrijskiLik::Ispisi();
    cout << "Povrsina kruga iznosi: " << IzracunajPovrsinu() << ",\na obim kruga iznosi: " << IzracunajObim() << '\n';
}

int main() {
    GeometrijskiLik g;
    g.Ispisi();

    Krug k(5);
    k.Ispisi();
    return 0;
}

/*
Napraviti klasu geometrijski_lik sa zasticenom varijablom naziv. U javnom dijelu ima metodu Ispisi() koja ispisuje
naziv geometrijskog lika. Napraviti klasu Krug koja nasljeduje klasu geometrijski_lik sa zasticenim varijablama
pi i r, a u javnom dijelu ima konstruktor kojim se dodjeljuje vrijendost poluprecnika i naziv iz klase geometrijski
lik. Takodjer ima tri metoda, IzracunajPovrsinu() koja vraca vrijednosti povrsine kruga, IzracunajObim() koji vraca
vrijednosti obima kruga, i Ispisi() u kojoj se ispisuje naziv geometrijskog lika iz klase roditelja, i ispis povrsine
i obima kruga.
*/
