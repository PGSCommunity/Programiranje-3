#include <iostream>
using namespace std;

class Pravougaonik {
    private:
        int a, b;
    public:
        void setStranica(int x, int y) {
            a = x;
            b = y;
        }
        int getPovrsina() {
            return a * b;
        }
};

int main() {
    int a, b;
    cout << "Unesite stranica pravougaonika!\n";
    cin >> a >> b;
    Pravougaonik p;
    p.setStranica(a, b);
    cout << "Povrsina pravougaonika iznosi: " << p.getPovrsina() << '\n';
    return 0;
}

/*
Deklarisati klasu Pravougaonik sa privatnim varijablama a i b. U public dijelu deklarisati dvije metode, jedan
setter, koji uzima varijable iz private dijela, i getPovrsina koja funkcionise kao getter, i vraca povrsinu 
pravougaonika. U main dijelu korisnik treba da sam unese vrijednosti stranica.
*/