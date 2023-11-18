#include <iostream>
#include <cmath>
using namespace std;

class Prizma {
    private: 
        float a, h;
    public:
        Prizma() {
            cout << "Unesite duzinu prizme!\n";
            cin >> a;
            cout << "Unesite visinu prizme!\n";
            cin >> h;
        }

        Prizma(int x, int y) {
            a = x;
            h = y;
        }

        float Povrsina();
        float Zapremina();
};

float Prizma::Povrsina() {
    return 6 * pow(a, 2);
}

float Prizma::Zapremina() {
    return ((3 * sqrt(3)) / 2) * pow(a, 2) * h; 
}

int main() {
    Prizma p1, p2(4, 5);
    cout << "Povrsina 1. prizme inzosi: " << p1.Povrsina() << '\n'; 
    cout << "Zapremina 1. prizme inzosi: " << p1.Zapremina() << '\n'; 
    
    cout << endl;
    
    cout << "Povrsina 2. prizme iznosi: " << p2.Povrsina() << '\n';
    cout << "Zapremina 2. prizme iznosi: " << p2.Zapremina() << '\n';
    return 0;
}

/*
Za pravilnu šesterostranu prizmu izraditi programsko rješenje uz primjenu klase koja će imati dva
konstruktora, jedan bez i jedan s parametrima. U klasi trebamo imati dvije funkcije tipa public
povrsina() i zapremina() te dvije članske varijable tipa private a i h. Kreirati dva objekta klase
jedan s i jedan bez prosljeđivanja parametara te iz maina za oba objekta ispisati vrijednost
površine i zapremine s preciznošću od dvije decimale pozivanjem pripadajućih metoda.
*/