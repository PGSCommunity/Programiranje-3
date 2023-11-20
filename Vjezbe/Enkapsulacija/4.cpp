#include <iostream>
#include <cmath>
using namespace std;

class Lopta {
    private:
        float R;
    public:
        const float PI = 3.14;
        void setPoluprecnik(float x) {
            R = x;
        }
        float getPovrsina() {
            return 4 * PI * pow(R, 2);
        }
        float getZapremina() {
            return (4 * PI * pow(R, 3)) / 3;
        }
};

int main() {
    float R;
    cout << "Unesite poluprecnik lopte!\n";
    cin >> R;

    Lopta l;
    l.setPoluprecnik(R);
    cout << "Povrsina lopte iznosi: " << l.getPovrsina() << '\n';
    cout << "Zapremina lopte iznosi: " << l.getZapremina() << '\n';
    return 0;
}

/*
Deklarisati klasu Lopta, koja sadrzi privatnu varijablu poluprecnik. U public dijelu treba da ima tri metode, jedan
setter, i getteri getPovrsina i getZapremina, koji vracaju povrsinu i zapreminu lopte. U main funkciji korisnik
treba da unese poluprecnik lopte. Sve konstante se trebaju deklarirati u public dijelu klase.
*/