#include <iostream>
using namespace std;

class AbsolutnaVrijednost {
    public:
        int Abs(int broj);
};

int AbsolutnaVrijednost::Abs(int broj) {
    if (broj >= 0) return broj;
    else return broj * -1;
}

int main() {
    AbsolutnaVrijednost abs;
    int broj;

    cout << "Unesite broj!\n";
    cin >> broj;

    cout << "Absolutna vrijednost broja: " << abs.Abs(broj) << '\n';
    return 0;
}
/*
Deklarisati klasu "AbsolutnaVrijednost" sa jednom metodom, koja vraca absolutnu vrijednost korisnickog unesenog
broja bez koristenja cmath biblioteke.
*/