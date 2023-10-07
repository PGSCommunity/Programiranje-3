#include <iostream>
using namespace std;

class Kvadrat {
    protected:
        int a;
    public:
        void upis();
        float rezultat();
};

void Kvadrat::upis() {
    cout << "Unesite broj a!\n";
    cin >> a;
}

float Kvadrat::rezultat() {
    return a * a;
}

class Kub:public Kvadrat {
    public:
        float rezultat();
};

float Kub::rezultat() {
    return a * a * a;
}

int main() {
    Kvadrat k1;
    k1.upis();
    cout << k1.rezultat() << '\n';

    Kub k2;
    k2.upis();
    cout << k2.rezultat() << '\n';
    return 0;
}
/*
Kreirati klasu Kvadrat koja ima metode "Upis" i "Rezultat" i protected varijablu "a". Kreirati klasu Kub koja 
nasljedjuje klasu Kvadrat te ima metodu "Rezultat". U glavnom programi napraviti objekt klase Kvadrat, pozvati
metode, pa napraviti objekt klase Kub, pa pozvati i njene metode.
*/