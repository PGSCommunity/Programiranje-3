#include <iostream>
using namespace std;

class Vrijeme {
    protected:
        int sat, minuta, sekunda;
    public: 
        Vrijeme(int x, int y, int z) {
            sat = x;
            minuta = y;
            sekunda = z;
        }

        virtual void Ispis() {
            cout << "Let polazi u " << sat << ":" << minuta << ":" << sekunda << '\n'; 
        }

        void Izvjestaj() {
            Ispis();
        }

        ~Vrijeme() {}
};

class Let: public Vrijeme {
    protected:
        string nazivLeta;
        int brojLeta, kasnjenje;
    public:
        Let(int sati, int minute, int sekunde, string n, int br, int k) : Vrijeme(sati, minute, sekunde) {
            nazivLeta = n;
            brojLeta = br;
            kasnjenje = k;
        }

        int Kasnjenje() {
            int ukupnoSekundi = sat * 3600 + minuta * 60 + sekunda + kasnjenje;
            return ukupnoSekundi;
        }

        void Ispis() {
            cout << "Naziv leta: " << nazivLeta << '\n';
            cout << "Broj leta: " << brojLeta << '\n';
            cout << "Let polazi u " << sat << ":" << minuta << ":" << sekunda << '\n';
            cout << "Polazak leta nakon kasnjenja:\n";
            cout << "Novi polazak leta je u: " << Kasnjenje() / 3600 << ":" << (Kasnjenje() % 3600) / 60 << ":" << Kasnjenje() % 60 << '\n';
        }

        ~Let() {}
};

int main() {
    Vrijeme v(2, 23, 53);
    v.Izvjestaj();

    Let l(3, 13, 20, "Sarajevo - Bec", 134, 300);
    l.Izvjestaj();
    return 0;
}

/*
Kreirati klasu Vrijeme koja će predstavljati vrijeme u satima, minutama i sekundam.  Iz date klase izvesti klasu 
Let koja sadrži naziv i broj leta. Podaci nasljeđeni iz osnovne klase predstavljaju vrijeme polaska leta. 
Ova klasa sadrži funkciju koja omogućava promjenu  ovog vremena za neko kašnjenje (dato u sekundama). 
U glavnoj funkciji se zadaje vrijeme polaska nekog leta, naziv i broj, te zadaje kašnjenje, a ispisuje novo 
vrijeme polaska sa uračunatim kašnjenjem.
*/