#include <iostream>
#include <cmath>
using namespace std;

class Kvadrat {
    public:
        double povrsina(double stranica);
        double obim(double stranica);
        double dijagonala(double stranica);
};

double Kvadrat::povrsina(double stranica) {
    return pow(stranica, 2);
}

double Kvadrat::obim(double stranica) {
    return 4 * stranica;
}

double Kvadrat::dijagonala(double stranica) {
    return stranica * sqrt(2);
}

int main() {
    Kvadrat k;

    double stranica;
    cout << "Unesite stranicu kvadrata!\n";
    cin >> stranica;

    cout << "Povrsina kvadrata iznosi: " << k.povrsina(stranica) << '\n';
    cout << "Obim kvadrata iznosi: " << k.obim(stranica) << '\n';
    cout << "Dijagonala kvadrata iznosi: " << k.dijagonala(stranica) << '\n';
    return 0;
}
/*
Deklarisati klasu Kvadrat sa funkcijama (metodama) povrisna, obim, i dijagonala. U main funkciji ispisati izracun
vrijednosti.
*/