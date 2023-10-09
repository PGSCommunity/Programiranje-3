#include <iostream>
using namespace std;

class Racun_Ime {
    public:
        int x, y;
        void Unos();
        void BrojDjeljivih();
        int SumaNeparnih();
};

void Racun_Ime::Unos() {
    cout << "Unesite brojeve x i y!\n";
    cin >> x >> y;
}

void Racun_Ime::BrojDjeljivih() {
    int br(0);
    for(int i = x; i <= y; i++) {
        if(i % 2 == 0 && i % 7 == 0) br++;
    }
    cout << "Broj parnih brojeva djeljivih sa 7: " << br << '\n';
}

int Racun_Ime::SumaNeparnih() {
    int s(0);
    int a;
    for(int i = 0; i < y; i++) {
        cout << "Unesite broj!\n";
        cin >> a;
        if(a % 2 != 0) s += a;
    }
    return s * x;
}

int main() {
    Racun_Ime r;
    
    r.Unos();
    r.BrojDjeljivih();
    cout << r.SumaNeparnih();
    return 0;
}
/*
Kreirati klasu Racun_Ime. Klasa sadrzi tri metode:
    a) Unos() - Omogucava unos vrijednosti dva broja x, y
    b) BrojDjeljivih() - Racuna i ispisuje broj parnih brojeva djeljivih sa 7 u intervalu x-y
    c) SumaNeparnih() - Od y proizvoljno ucitanih brojeva racuna sumu neparnih, pa vraca u funkciju proracunatu
    vrijednost uvecanu x puta
*/