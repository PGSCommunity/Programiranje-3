#include <iostream>
#include <cmath>
using namespace std;

class Tacka {
    protected:
        double x, y;
    public:
        Tacka();
        Tacka(double X, double Y);
        double Udaljenost(Tacka tacka);
        double vratiX() {
            return x;
        }
        double vratiY() {
            return y;
        }
};

Tacka::Tacka() {
    x = 0;
    y = 0;
}

Tacka::Tacka(double X, double Y) {
    x = X;
    y = Y;
}

double Tacka::Udaljenost(Tacka tacka) {
    return sqrt(pow(tacka.x, 2) + pow(tacka.y, 2));
}

double Udaljenost(Tacka tacka1, Tacka tacka2) {
    double x = tacka1.vratiX() - tacka2.vratiX();
    double y = tacka1.vratiY() - tacka2.vratiY();
    return sqrt(pow(x, 2) + pow(y, 2));
}

int main() {
    Tacka tacka1;
    Tacka tacka2(3, 4);

    cout << tacka1.Udaljenost(tacka2) << '\n';
    cout << Udaljenost(tacka1, tacka2) << '\n';
    return 0;
}

/*
Napisati klasu Tacka koja sadrži: 
Atribute x i y tipa double koji predstavljaju koordinate tačke
Defaultni konstruktor koji postavlja vrijednosti koordinata na 0 kada ih korisnik ne proslijedi
Konstruktor koji prima dva parametra X i Y i postavlja koordinate x i y na vrijednosti X i Y, ovim redoslijedom
Funkciju Udaljenost koja se nalazi unutar klase (dakle radi se o metodi klase) koja prima jedan parametar tipa 
Tacka. Funkcija treba da vrati udaljenost između tačke nad kojom je pozvana funkcija sa tačkom koja je 
proslijeđena kao parametar
Funkciju Udaljenost koja se nalazi van klase i koja prima dva parametra, oba tipa Tacka, koja vraća udaljenost 
između dvije proslijeđene tačke.
*/
