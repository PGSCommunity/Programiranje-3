#include <iostream>
#include <cmath>
using namespace std;

class Pravougaonik {
    public:
        int dA, dB;
        void unosStranica();
        int povrsina();
};

void Pravougaonik::unosStranica() {
    cout << "Unesite stranice a i b!\n";
    cin >> dA >> dB;
}

int Pravougaonik::povrsina() {
    return dA * dB;
}

class Kvadrat:public Pravougaonik {
    public:
        int povrsina();
};

int Kvadrat::povrsina() {
    return pow(dA, 2);
}

int main() {
    Pravougaonik p;
    p.unosStranica();
    cout << "Povrsina pravougaonika iznosi: " << p.povrsina() << '\n';

    cout << endl;

    Kvadrat k;
    k.unosStranica();
    cout << "Povrsina kvadrata iznosi: " << k.povrsina() << '\n';
    return 0;
}

/*
Kreirati klasu Pravougaonik koja ima atribute dA i dB koji oznacavaju duzine stranica pravougaonika. Unutar klase
Pravougaonik kreira se konstruktor koji postavlja duzine stranica na proizvoljne vrijednosti te metoda Povrsina
koja vraca vrijednosti povrsine pravougaonika. Zatim kreirati klasu Kvadrat koja nasljeduje atribute klase
Pravougaonik i sadrzi metodu Povrsina, koja vraca vrijednosti povrsine kvadrata (za manju od vrijednosti duzina
stranica pravougaonika).

Editor's note: Konstruktor je jos jedno ima za metodu.
*/