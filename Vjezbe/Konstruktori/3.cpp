#include <iostream>
#include <cmath>
using namespace std;

class Tacka {
    public:
        int x, y;
        Tacka(int a, int b);
        float Ishodiste();
};

Tacka::Tacka(int a, int b) {
    x = a;
    y = b;
}

float Tacka::Ishodiste() {
    return sqrt(pow(x, 2) + pow(y, 2));
}

int main() {
    int a, b;
    cout << "Unesite koordinatne tacke!\n";
    cin >> a >> b;

    Tacka t(a, b);
    cout << "Udaljenost tacke od ishodista: " << t.Ishodiste() << '\n';
    return 0;
}

/*
Kreirati klasu Tacka koja u javnom dijelu ima varijable (koordinate) x i y, metodu koja se zove Ishodiste koja
racuna udaljenost te tacke od ishodista. Klasa ima konstruktor koji postavlja vrijednosit koordinate tacke koji
postavlja korisnik.
*/