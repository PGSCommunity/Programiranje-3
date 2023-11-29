#include <iostream>
#include <string>
using namespace std;

class Temperatura {
    protected:
        double sumaTemperature;
        int brojMjeseci;
    public:
        Temperatura() {
            sumaTemperature = 0;
            brojMjeseci = 0;
        }

        void izracunajTemperaturu(double temperatura) {
            sumaTemperature += temperatura;
            brojMjeseci++;
        }

        double izracunajProsjek() {
            if (brojMjeseci == 0) return -1;
            return sumaTemperature / brojMjeseci;
        }

        virtual void Ispis() {
            cout << "Prosjecna temperatura u gradu za " << brojMjeseci << " mjeseci je: " << izracunajProsjek() << '\n';
        }

        void Izvjestaj() {
            Ispis();
        }

        ~Temperatura() {}
};

class Prosjek: public Temperatura {
    protected:
        string nazivGrada;
    public:
        Prosjek(string naziv) {
            nazivGrada = naziv;
        }

        void Ispis() {
            cout << "Prosjecna temperatura u gradu " << nazivGrada << " za " << brojMjeseci << "mjeseci je: " << izracunajProsjek() << '\n';
        }
};

int main() {
    string grad;
    int n;
    cout << "Unesite broj mjeseci!\n";
    cin >> n;

    cin.ignore();

    cout << "Unesite ime grada!\n";
    getline(cin, grad);

    Temperatura t;
    Prosjek p(grad);
    for(int i = 0; i < n; i++) {
        double temperatura;
        cout << "Unesite temperaturu za " << i + 1 << ". mjesec!\n";
        cin >> temperatura;
        t.izracunajTemperaturu(temperatura);
        p.izracunajTemperaturu(temperatura);
    }

    t.Izvjestaj();
    p.Izvjestaj();
    return 0;
}

/*
Koristeći OOP potrebno je napisati program koji će izračunati prosječnu temperaturu jednog grada za n mjeseci. 
Klasa Temperatura pomocu atributa i metoda omogucava sumiranje svih n vrijednosti temperatura uneseneih u 
glavnoj funkciji. Izvedena klasa Prosjek posjeduje atribute i metode koji ce ispisati naziv grada 
(unesen u glavnoj funkciji) i prosječnu temperaturu.
*/