#include <iostream>
using namespace std;

class Artikal {
    protected:
        float cijena;
        string naziv;
        string sifra;
    public:
        const float PDV = 0.17;
        Artikal(float c, string n, string s);
        float IzracunajPDV();
        void Ispisi();
};

Artikal::Artikal(float c, string n, string s) {
    cijena = c;
    naziv = n;
    sifra = s;
}

float Artikal::IzracunajPDV() {
    return cijena * PDV;
}

void Artikal::Ispisi() {
    cout << "Naziv artikla: " << naziv << '\n';
    cout << "PDV Artikla: " << IzracunajPDV() << '\n';
}

class Hrana:public Artikal {
    protected:
        float kalorije;
        float tezina;
    public:
        Hrana(float c, string n, string s, float k, float t):Artikal(c, n ,s) {
            kalorije = k;
            tezina = t;
        }
        void Ispisi();
};

void Hrana::Ispisi() {
    cout << "SKUPINA: HRANA:\n";
    Artikal::Ispisi();
    cout << "Kalorije: " << kalorije << '\n';
    cout << "Tezina: " << tezina << '\n';
}

class Pice:public Artikal {
    protected:
        float zapremina;
    public:
        Pice(float c, string n, string s, float z):Artikal(c, n, s) {
            zapremina = z;
        }
        void Ispisi();
};

void Pice::Ispisi() {
    cout << "SKUPINA: PICE:\n";
    Artikal::Ispisi();
    cout << "Zapremina: " << zapremina << '\n';
}

int main() {
    Hrana hrana(10.5, "Jabuka", "12345", 52.3, 0.5);
    Pice pice(5.5, "Coca-Cola", "67890", 0.5);

    hrana.Ispisi();
    pice.Ispisi();
    return 0;
}

/*
Kreirati klasu Artikal koja kao atribote ima cijenu, naziv i šifru artikla te atribut PDV koji ji 17%.
Zatim kreirati izvedene klase Hrana i Pice koje imaju posebne artikle;
Hrana ima hranjivu vrijednost u kalorijama i težinu a pice ima zapreminu u litrima.
U klasi artikal definiraju se metode IzracunajPDV i metoda za ispis naziva artikla.
U glavnom programu instancira se nekoliko objekata hrane i pica.
Na kraju je portrebno ispisati naziv, PDV artikla na zadanu cijenu i kojoj skupini pripada (hrana ili pice).
*/