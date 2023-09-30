#include <iostream>
#include <cmath>
using namespace std;

class Lopta {
    public: 
        const float PI = 3.14;
        float povrsina(float poluprecnik) {
            return 4 * pow(poluprecnik, 2) * PI;
        }
        float zapremina(float poluprecnik) {
            return (4 / 3) * pow(poluprecnik, 3) * PI;
        }
};

int main() {
    Lopta l;
    float poluprecnik;

    cout << "Unesite poluprecnik lopte!\n";
    cin >> poluprecnik;

    cout << "Ispis podataka lopte za ucitani poluprecnik:\n";
    cout << "Povrsina: " << l.povrsina(poluprecnik) << '\n';
    cout << "Zapremina: " << l.zapremina(poluprecnik) << '\n';
    return 0;
}
/*
Koristeci OOP , napisati program koji za učitani poluprečnik, računa  i ispisuje površinu i zapreminu lopte. 
Pogram sadrzi jednu klasu i dvije metode koje vraćaju vrijednosti. Metode je potrebno definirati unutar klase.
*/