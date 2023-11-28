#include <iostream>
#include <cmath>
using namespace std;

class Koordinate {
    protected:
        int x, y;
    public: 
        Koordinate(int x1, int y1) {
            x = x1;
            y = y1;
        }

        virtual void Zaglavje() {
            float udaljenost = sqrt(x * x + y * y);
            cout << "Udaljenost tacke od ishodista sa koordinata " << x << ", " << y << ": " << udaljenost << '\n';
        }

        ~Koordinate() {}
};

class Kvadrant: public Koordinate {
    protected:
        float razdaljina;
    public:
        Kvadrant(int x, int y) : Koordinate(x, y) {
            razdaljina = sqrt(x * x + y * y);
        }

        void Polozaj() {
            if (x > 0 && y > 0) cout << "Prvi kvadrant.\n";
            else if (x < 0 && y > 0) cout << "Drugi kvadrant.\n";
            else if (x < 0 && y < 0) cout << "Treci kvadrant.\n";
            else if (x > 0 && y < 0) cout << "Cetvrti kvadrant.\n";
            else if (x == 0 && y != 0) cout << "Na y-osi.\n";
            else if (x != 0 && y == 0) cout << "Na x-osi.\n";
            else cout << "U ishodistu koordinatnog sistema.\n";
        }

        void Udaljenost() {
            cout << "Udaljenost tacke od ishodista: " << razdaljina << '\n';
        }

        void Zaglavje() {
            cout << "Kvadrant u kojem se nalazi tacka sa koordinatama " << x << ", " << y << " je:\n";
            Polozaj();
            Udaljenost();
        }
        ~Kvadrant() {}
}; 

int main() {
    Koordinate tacka1(1, 2);
    tacka1.Zaglavje();

    Kvadrant tacka2(4, 6);
    tacka2.Zaglavje();
    return 0;
}

/*
Kreirati klasu Koordinate (atributi – 2 cjelobrojne vrijednosti, konstruktor, destruktor, metoda koja ispisuje 
zaglavlje). Potom kreirati izvedenu klasu Kvadrant koja nasljeđuje metode i atribude bazne klase Koordinate, 
te sadrži konstruktor, destruktor, atribut 'razdaljina' , metodu zaglavlje() (ispisuje poruku 
„Kvadrant u kojem se nalazi tacka sa koordinatama ... je:  ...  „) , metodu polozaj()
( ispisuje u kojem kvadrantu se nalazi tačka za učitane koordinate), metodu udaljenost() 
(računa i ispisuje udaljenost tacke od ishodišta koordinatnog sistema).
*/