#include <iostream>
using namespace std;

class Pretvorba {
    private:
        float h;
    public:
        Pretvorba() {
            h = 100;
        }

        Pretvorba(int cm) {
            h = cm;
        }

        float pretvorba();
};

float Pretvorba::pretvorba() {
    return h / 30.48;
}

int main() {
    Pretvorba p1, p2(30);

    cout << "Pretvorba centimetara u stope iznosi: " << p1.pretvorba() << '\n';
    cout << "Pretvorba centimetara u stope iznosi: " << p2.pretvorba() << '\n';
    
    return 0;
}

/*
Izraditi programsko rješenje uz primjenu klase koja će pretvarati visinu u cm u stope. Klasa treba
imati dva konstruktora, jedan bez i jedan s parametrima. U konstruktoru bez parametara visina
treba biti 100. U klasi trebamo imati jednu funkciju tipa public pretvorba() te člansku varijablu
tipa private h. Kreirati dva objekta klase jedan bez prosljeđivanja parametara, i jedan s
prosljeđivanjem te iz maina za njih ispisati vrijednost visinu u stopama s preciznošću od dvije
decimale pozivanjem pripadajuće metode.

Podsjetnik: 100 cm = 3.28084 ft
*/