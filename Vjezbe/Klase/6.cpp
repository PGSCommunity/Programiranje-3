#include <iostream>
using namespace std;

class Kalkulator {
    public:
        int sabiranje(int a, int b);
        int oduzimanje(int a, int b);
        int mnozenje(int a, int b);
        int dijeljenje(int a, int b);
};

int Kalkulator::sabiranje(int a, int b) {
    return a + b;
}

int Kalkulator::oduzimanje(int a, int b) {
    return a - b;
}

int Kalkulator::mnozenje(int a, int b) {
    return a * b;
}

int Kalkulator::dijeljenje(int a, int b) {
    return a / b;
}

int main() {
    Kalkulator k;
    int a, b;
    char c;

    cout << "Unesite brojeve a i b!\n";
    cin >> a >> b;
    
    cout << "Unesite znak za izbor! (+, -, *, /)\n";
    unos:cin >> c;
    
    switch(c) {
        case '+':
            cout << k.sabiranje(a, b);
            break;
        case '-':
            cout << k.oduzimanje(a, b);
            break;
        case '*':
            cout << k.mnozenje(a, b);
            break;
        case '/':
            cout << k.dijeljenje(a, b);
            break;
        default:
            cout << "Netacno! Mora te unijeti znak (+, -, *, /)!\nPokusaj te ponovo: ";
            goto unos;
    }
    return 0;
}
/*
Kreirati klasu kalkulator, sa 4 metode, sabiranje, oduzimanje, mnozenje i dijeljenje. U glavnoj funkicji se unose
dva broja i znak za izbor, i na osnovu izbora znaka prosljedjuju se metodama, i ispisuje rezultat.
*/