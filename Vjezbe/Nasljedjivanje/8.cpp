#include <iostream>
#include <string>
using namespace std;

class Knjiga {
    protected:
        string naziv;
        int brojStranica;
        string autor;
    public:
        Knjiga(string n, int br, string a);
};

Knjiga::Knjiga(string n, int br, string a) {
    naziv = n;
    brojStranica = br;
    autor = a;
}

class Udzbenik:public Knjiga {
    protected:
        string predmet;
    public:
        Udzbenik(string n, int br, string a, string p):Knjiga(n, br, a) {
            predmet = p;
        }
        string vratiNaziv();
        string vratiAutora();
};

string Udzbenik::vratiNaziv() {
    return naziv;
}

string Udzbenik::vratiAutora() {
    return autor;
}

int main() {
    string naziv, autor, predmet;
    int brojStranica;

    cout << "Unesite naziv udzbenika!\n";
    getline(cin, naziv);

    cout << "Unesite broj stranica udzbenika!\n";
    cin >> brojStranica;
    cin.ignore();
    
    cout << "Unesite autor udzbenika!\n";
    getline(cin, autor);

    cout << "Unesite predmet udzenika!\n";
    getline(cin, predmet);

    Udzbenik u(naziv, brojStranica, autor, predmet);

    if (u.vratiNaziv() == "Programiranje") cout << "Ime autora udzbenika je " << u.vratiAutora() << '\n';
    return 0;
}

/*
Kreirati klasu Knjiga (posjeduje atribute naziv, broj stranica, autor) i podklasu Udzbenik (posjeduje dodatni 
atribut - predmet). Omoguciti korisnicki unos atributa klase Uzbenik, te ukoliko je unesen naziv udžbenika 
Programiranje, ispisati ime autora udzbenika. 
*/
