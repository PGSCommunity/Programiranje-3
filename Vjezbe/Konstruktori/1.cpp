#include <iostream>
using namespace std;

class Pravougaonik {
    public:
        int a, b;
        Pravougaonik();
        int Povrsina();
        int Obim();
};

Pravougaonik::Pravougaonik() {
    cout << "Unesite vrijednosti a i b!\n";
    cin >> a >> b;
}

int Pravougaonik::Povrsina() {
    return a * b;
}

int Pravougaonik::Obim() {
    return 2 * (a + b);
}

int main() {
    Pravougaonik p;
    cout << "Povrsina iznosi: " << p.Povrsina() << '\n';
    cout << "Obim iznosi: " << p.Obim() << '\n';
    return 0;
}

/*
Deklarisati klasu "Pravougaonik", sa varijablama a, b, i metodama Povrsina i Obim. Klasa ima konstruktor koji
omogucava unos varijabli a i b. U main funkciji se deklarise objekat i ispisuju metode.
*/