#include <iostream>
#include <cmath>
using namespace std;

class Krug {
    public:
        void unosPoluprecnika();
        float povrsina();
        float obim();
    private:
        const float PI = 3.14;
        float r;
};

void Krug::unosPoluprecnika() {
    cout << "Unesite poluprecnik!\n";
    cin >> r;
}

float Krug::povrsina() {
    return pow(r, 2) * PI;
}

float Krug::obim() {
    return 2 * r * PI;
}

int main() {
    Krug k;
    k.unosPoluprecnika();
    cout << "Povrsina: " << k.povrsina() << '\n';
    cout << "Obim: " << k.obim() << '\n';
    return 0;
}
/*
Deklarisati klasu krug sa metodama unos poluprecnika, povrsina i obim. Sve varijable su privatne. U glavnoj
funkcijni treba se pozvati sve metode.
*/