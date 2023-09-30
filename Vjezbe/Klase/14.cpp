#include <iostream>
#include <cmath>
using namespace std;

class Tacka {
    public:
        float Ishodiste(int a, int b);
};

float Tacka::Ishodiste(int a, int b) {
    return sqrt(pow(a, 2) + pow(b, 2));
}

int main() {
    Tacka T1;
    int x, y;

    cout << "Unesite tacke x i y!\n";
    cin >> x >> y;

    cout << "Udaljenost tacke od ishodista: " << T1.Ishodiste(x, y) << '\n';
    return 0;
}
/*
Deklarirati klasu Tacka koja u javnom dijelu ima metodu Ishodiste() - metoda s argumentima,
u glavnoj funkciji se deklarira objekt T1, unose koordinate tacke te ispisuje udaljenost tacke od iskodista.
*/