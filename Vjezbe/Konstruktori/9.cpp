#include <iostream>
using namespace std;

class Auto {
    private:
        float prijedjeniPut, velicinaRezervoara;
    public:
        Auto() {
            cout << "Unesi prijedjeni put auta!\n";
            cin >> prijedjeniPut;
            cout << "Unesi velicinu rezervoara auta!\n";
            cin >> velicinaRezervoara;
        }

        Auto(int a, int b) {
            prijedjeniPut = a;
            velicinaRezervoara = b;
        } 

        float Potrosnja() {
            return velicinaRezervoara * 100 / prijedjeniPut;
        }
};

int main() {
    Auto a1, a2(321, 500), a3(500, 321);

    cout << "Potrosnja 1. auta: " << a1.Potrosnja() << '\n';
    cout << "Potrosnja 2. auta: " << a2.Potrosnja() << '\n';
    cout << "Potrosnja 3. auta: " << a3.Potrosnja() << '\n';
    
    return 0;
}

/*
Izraditi programsko rješenje uz primjenu klase koja će računati prosječnu potrošnju goriva automobila na
100 km. Klasa treba imati dva konstruktora, jedan bez i jedan s parametrima. U klasi trebamo imati funkcije tipa
public potrosnja() te dvije članske varijable tipa private prijedjeniPut i velicinaRezervoara. Kreirati tri
objekta klase jedan bez prosljeđivanja parametara, te dva s prosljeđivanjem te iz maina za njih ispisati
vrijednost prosječne potrošnje goriva preciznošću od dvije decimale pozivanjem pripadajućih metoda.
Podsjetnik:

prosjecnaPotrosnja=velicinaSpremnika*100/prijedjeniPut
*/