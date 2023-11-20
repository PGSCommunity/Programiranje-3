#include <iostream>
using namespace std;

class Zaposlenik {
    private:
        double plata;
    public:
        void setPlata(double p) {
            plata = p;
        } 
        double getPlata() {
            return plata;
        }
        double bonus() {
            return 2 * plata;
        }
};

int main() {
    Zaposlenik z;
    z.setPlata(2350);

    cout << "Plata zaposlenika iznosi: " << z.getPlata() << '\n';
    cout << "Dodatak na platu zaposlenika je: " << z.bonus() << '\n';
    return 0;
}

/*
Napisati klasu Zaposlenik, sa privatnom varijablom plata, tipa double. U public dijelu, deklarirati tri metode,
jedan setter, koji ce uzeti vrijednosti plate, getter koji ce vratiti platu, i bonus u kojoj je plata uvecana
2 puta.
*/