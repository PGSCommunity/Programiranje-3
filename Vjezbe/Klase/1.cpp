#include <iostream>
using namespace std;

class Auto {
    public:
        double brzina;
        string model;
        string boja;
};

int main() {
    Auto automobil1, automobil2;

    cout << "Unesite brzinu 1. auta!\n";
    cin >> automobil1.brzina;

    cout << "Unesite model 1. auta!\n";
    cin >> automobil1.model;

    cout << "Unesite boju 1. auta!\n";
    cin >> automobil1.boja;

    cout << '\n';

    cout << "Unesite brzinu 2. auta!\n";
    cin >> automobil2.brzina;

    cout << "Unesite model 2. auta!\n";
    cin >> automobil2.model;

    cout << "Unesite boju 2. auta!\n";
    cin >> automobil2.boja;

    cout << '\n';

    cout << "Ja vozim " << automobil1.model << ", " << automobil1.boja << " boje i jurim " << automobil1.brzina << " na sat.\n";
    cout << "Moj drug vozi " << automobil2.model << ", " << automobil2.boja << " boje i ne juri bas jer vozi " << automobil2.brzina << " na sat.\n";
    return 0;
}
/*
Kreirati klasu auto sa varijablama javnog tipa brzina, model, boja. U main funkciji kreirati dva objekta koristeci
objekte dodijeliti vrijednost variablama po zelji zatim ispisati dvije recenice:
Ja vozim ... auto, ... boje i jurim ... brzinom na sat.
Moj drug vozi ... auto, ... boje i ne juri bas jer vozi ... na sat.
*/
//Editor's note, ime klase pocinje sa velikim slovom jer je 'auto' tip podatka kao int, double, itd!