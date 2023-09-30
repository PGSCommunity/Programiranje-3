#include <iostream>
#include <cmath>
using namespace std;

class Interval {
    public:
        int x, y, z;
        void unosPodataka();
        void brojParnih();
        void proizvodNeparnih();
};

void Interval::unosPodataka() {
    cout << "Od broja?\n";
    cin >> x;

    cout << "Do broja?\n";
    cin >> y;

    cout << "Unesite broj z!\n";
    cin >> z;
}

void Interval::brojParnih() {
    int br(0);

    for(int i = x; i <= y; i++) {
        if (i % 2 == 0 && i % z == 0) br++;
    }

    cout << "Broj parnih brojeva djeljivih sa z: " << br << '\n';
}

void Interval::proizvodNeparnih() {
    int p(1);

    for(int i = x; i <= y; i++) {
        if (i % 2 != 0 && pow(i, 2) == z) p *= i;
    }

    cout << "Proizvod neparnih brojeva ciji je kvadrat jednak broju z: " << p << '\n';
}

int main() {
    Interval i;
    i.unosPodataka();
    i.brojParnih();
    i.proizvodNeparnih();
    return 0;
}
/*
Koristeci OOP , napisati program koji Izračuna
    a.	broj parnih prirodnih brojeva u intervalu  x do y koji su djeljivi sa z. 
    b.	proizvod neparnih brojeva u intervalu x do y čiji je kvadrat jednak broju z.
Program sadrzi jednu klasu i tri metode(prva omogucava unos vrijednosti x, y i z, a druge dvije omogucavaju gore
navedeni proračun i ispis). Unutar main funkcije se definira objekt nad klasom koji samo poziva metode. Metode 
je potrebno definirati izvan klase.
*/