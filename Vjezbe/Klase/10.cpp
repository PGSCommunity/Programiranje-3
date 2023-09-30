#include <iostream>
using namespace std;

class Razred {
    public:
        int ucenici(int brojUcenika);
};

int Razred::ucenici(int brojUcenika) {
    return brojUcenika;
}

int main() {
    Razred r;
    cout << "Broj ucenika u odljeljenju je: " << r.ucenici(23); // Mak ;(
    return 0;
}
/*
Definirati klasu razred i metodu (izvan definicije klase) koja vraća vrijednost - broj učenika odjeljenja
*/