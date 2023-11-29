#include <iostream>
#include <string>
#include <string.h>
using namespace std;

class Tekst {
    protected:
        string tekst;
    public:
        Tekst(string t) {
            tekst = t;
        }
        
        virtual void Naziv() {
            cout << "Tekst knjige:\n";
            cout << tekst << "\n\n";
            cout << "Ukupan broj znakova u tekstu: " << tekst.size() << '\n';
        }

        virtual void brojZnakova() {
            int brojVelikihSlova{0}, brojMalihSlova{0}, brojInterpunkcija{0}, brojRazmaka{0};

            for (int i = 0; i < tekst.size(); i++) {
                char c = tekst[i];
                if (isupper(c)) brojVelikihSlova++;
                if (islower(c)) brojMalihSlova++;
                if (ispunct(c)) brojInterpunkcija++;
                if (isspace(c)) brojRazmaka++;
            }
        
            cout << "Ukupan broj znakova u tekstu (bez razmaka): " << tekst.size() - brojRazmaka << '\n';
            cout << "Ukupan broj velikih slova u tekstu: " << brojVelikihSlova << '\n';
            cout << "Ukupan broj malih slova u tekstu: " << brojMalihSlova << '\n';
            cout << "Ukupan broj interpunkcija u tekstu: " << brojInterpunkcija << '\n';
            cout << "Ukupan broj razmaka u tekstu: " << brojRazmaka << "\n\n";
        }

        void Izvjestaj() {
            Naziv();
            brojZnakova();
        }
};

class Knjiga: public Tekst {
    protected:
        string nazivKnjige;
        int brojStranica;
    public:
        Knjiga(string t, string n, int br) : Tekst(t) {
            nazivKnjige = n;
            brojStranica = br;
        }

        void Naziv() {
            cout << "Naziv knjige: " << nazivKnjige << '\n';
            cout << "Broj stranica knjige: " << brojStranica << '\n';
            cout << "Tekst knjige:\n";
            cout << tekst << "\n\n";
            cout << "Ukupan broj znakova u tekstu: " << tekst.size() << '\n';
        }

        void brojZnakova() {
            int brojVelikihSlova{0}, brojMalihSlova{0}, brojInterpunkcija{0}, brojRazmaka{0};

            for (int i = 0; i < tekst.size(); i++) {
                char c = tekst[i];
                if (isupper(c)) brojVelikihSlova++;
                if (islower(c)) brojMalihSlova++;
                if (ispunct(c)) brojInterpunkcija++;
                if (isspace(c)) brojRazmaka++;
            }

            cout << "Prosjecan broj znakova: " << tekst.size() / brojStranica << '\n';
            cout << "Ukupan broj znakova u tekstu (bez razmaka): " << tekst.size() - brojRazmaka << '\n';
            cout << "Ukupan broj velikih slova u tekstu: " << brojVelikihSlova << '\n';
            cout << "Ukupan broj malih slova u tekstu: " << brojMalihSlova << '\n';
            cout << "Ukupan broj interpunkcija u tekstu: " << brojInterpunkcija << '\n';
            cout << "Ukupan broj razmaka u tekstu: " << brojRazmaka << '\n';
        }
};

int main() {
    Tekst t("The quick brown fox, jumps over a lazy dog.");
    t.Izvjestaj();

    Knjiga k("Riba ribi grize rep.", "Jadna riba", 1);
    k.Izvjestaj();
    return 0;
}

/*
Kreirati klasu Tekst, sa atributima i metodama koji će omogućiti ispis broja velikih slova, malih slova, 
interpunkcija i razmaka. Ukupni broj znakova (velikih slova, malih slova, interpunkcija i razmaka) predstavlja 
prosječan broj znakova jedne stranice knjige. Kreirati izvedenu klasu Knjiga sa atributima naziv i broj stranica.
Potrebno je ispisati koliko bi znakova (u prosjeku ) sadržavala ta knjiga.
*/