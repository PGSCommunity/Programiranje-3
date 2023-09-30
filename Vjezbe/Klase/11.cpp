#include <iostream>
using namespace std;

class TestBroj {
    public: 
        bool pozitivan(int broj);
};

bool TestBroj::pozitivan(int broj) {
    if (broj > 0) return true;
    else return false;
}

int main() {
    TestBroj t;

    int broj;
    cout << "Unesite broj!\n";
    cin >> broj;

    if(t.pozitivan(broj)) cout << "Broj je pozitivan.\n";
    else cout << "Broj je negativan.\n";
    return 0;
}
/*
Deklarisati klasu TestBroj koja sadrzi metodu ciji je zadatak ispitati da li je broj unesen od strane korisnika 
pozitivan ili negativan.Zadatak metode je da vrati logicku vrijednost (true or false) a sama poruka se ispisuje
unutar main funkcije
*/