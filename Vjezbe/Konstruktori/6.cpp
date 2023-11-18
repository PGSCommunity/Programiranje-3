#include <iostream>
#include <cmath>
using namespace std;

class Kocka {
    private:
        int a;
    public:
        Kocka(int x) {
            a = x;
        }

        int Povrsina();
        int Zapremina();

        ~Kocka() { 
            cout << "Pozvan je destruktor!\n";
        }
};

int Kocka::Povrsina() {
    return 6 * pow(a, 2);
}

int Kocka::Zapremina() {
    return pow(a, 3);
}

int main() {
    Kocka k(3);
    cout << "Povrsina kocke iznosi: " << k.Povrsina() << '\n';
    cout << "Zapremina kocke iznosi: " << k.Zapremina() << '\n';
    return 0;
}

/*
Napisati program sa deklaracijom klase Kocka.
Klasa treba imati:
- jednu clansku varijablu (a) s pravom pristupa private
- konstruktor
- destruktor
- funkciju povrsina koja ce racunati povrsinu kocke 
- funkciju zapremina koja ce racunati zapreminu kocke

U mainu treba:
- deklarisati dva objekta klase kocka, ispisati povrsinu i zapreminu pozivanjem pripadajucih funkcija
*/