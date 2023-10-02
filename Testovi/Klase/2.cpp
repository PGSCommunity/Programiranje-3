#include <iostream>
#include <cmath>
using namespace std;

class Kvadar {
    public:
        int povrsina(int a, int b, int c);
        int zapremina(int a, int b, int c);
        float dijagonala(int a, int b, int c);
};

int Kvadar::povrsina(int a, int b, int c) {
    return 2 * (a * b + a * c + b * c);
}

int Kvadar::zapremina(int a, int b, int c) {
    return a * b * c;
}

float Kvadar::dijagonala(int a, int b, int c) {
    return sqrt(pow(a,2) + pow(b, 2) + pow(c, 2));
}

int main() {
    Kvadar k1;
    int a, b, c;
    
    cout << "Unesite stranice a, b, i c!\n";
    cin >> a >> b >> c;

    cout << "Povrsina kvadra iznosi: " << k1.povrsina(a, b, c) << '\n';
    cout << "Zapremina kvadra iznosi: " << k1.zapremina(a, b, c) << '\n';
    cout << "Dijagonala kvadra iznosi: " << k1.dijagonala(a, b, c) << '\n';
    return 0;
}
/*
Kreirati klasu Kvadar, koja sadrzi tri metode a ciji je zadatak izracunati i vratiti vrijednosti povrsine, 
zapremine i duzine prostorne dijagonale kvadra ( P = 2(ab + ac + bc), V = abc, D^2 = a^2 + b^2 + c^2). Potrebno je
razdvojiti definicije i deklaracije metoda. U glavnoj funkciji se definira objekt k1 i unose dizne stranica a, b
i c.
*/