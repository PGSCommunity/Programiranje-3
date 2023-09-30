#include <iostream>
using namespace std;

class Aritmeticka {
    public:
        float broj, suma = 0, brojac = 0;
        void Obrada();
        void Ispis();
};

void Aritmeticka::Obrada() {
    cout << "Unesite brojeve! (Unosom 0 radnja se prekida!)\n";

    while(cin >> broj) {
        if(broj == 0) break;
        if(broj > 0) {
            suma += broj;
            brojac++;
        }
    }
}

void Aritmeticka::Ispis() {
    cout << "Aritmeticka sredina pozitivnih brojeva je: " << suma / brojac << '\n';
}

int main() {
    Aritmeticka a;

    a.Obrada();
    a.Ispis();
    return 0;
}
/*
Deklarirati klasu Aritmeticka koja u javnom dijelu ima metode Obrada() i Ispis(), obje metode su bez argumenata. 
Prva omogucava unos brojeva razlicitih od 0 (unosom 0 radnja se prekida) i sabiranje pozitivnih brojeva,
a druga ispisuje aritmeticku sredinu unesenih pozitivnih projeva. 
U glavnoj funkciji se deklarira objekt a i pozivaju navedene metode.
*/