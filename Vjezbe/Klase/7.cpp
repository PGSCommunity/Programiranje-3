#include <iostream>
using namespace std;

class Pravougaonik {
    public:
        int povrsina(int a, int b);
        int obim(int a, int b);
    private:
        int c;
};

int Pravougaonik::povrsina(int a, int b) {
    c = a * b;
    return c;
}

int Pravougaonik::obim(int a, int b) {
    c = 2 * (a + b);
    return c;
}

int main() {
    Pravougaonik p;
    int a, b;
    cout << "Unesite stranice a i b!\n";
    cin >> a >> b;

    cout << "Povrsina: " << p.povrsina(a, b) << '\n';
    cout << "Obim: " << p.obim(a, b) << '\n';
    return 0;
}
/*
Unutar klase pravougaonik deklarisati dvije metode, povrsina i obim koje racunaju vrijednost povrsine i obima i
spremaju u variablu c koja je definirana kao privatna.
*/