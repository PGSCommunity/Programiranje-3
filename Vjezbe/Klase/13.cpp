#include <iostream>
#include <cmath>
using namespace std;

class Prost {
    public:
        bool JelBrojProst(int broj);
};

bool Prost::JelBrojProst(int broj) {
    for(int i = 2; i <= sqrt(broj); i++) {
        if(broj % i == 0) return false;
    }
    return true;
}

int main() {
    Prost p;
    int broj;

    cout << "Unesite broj!\n";
    cin >> broj;

    if(p.JelBrojProst(broj)) cout << "Broj je prost.\n";
    else cout << "Broj nije prost.\n";
    return 0;
}
/*
Deklarisati klasu Prost koja sadrzi metodu ciji je zadatak ispitati da li je broj unesen od strane korisnika prost
ili ne. Zadatak metode je da vrati logicku vrijednost (true or false) a sama poruka se ispisuje unutar main 
funkcije
*/