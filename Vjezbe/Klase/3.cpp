#include <iostream>
#include <string>
using namespace std;

class Ucenik {
    public:
        string ime;
        double prosjek;
        int godineUcenika(int godine);
};

int Ucenik::godineUcenika(int godine) {
    return godine;
}

int main() {
    Ucenik ucenik1, ucenik2;

    ucenik1.ime = "Alija Vuk";
    ucenik1.prosjek = 3.74;

    cout << "Unesite ime ucenika!\n";
    getline(cin, ucenik2.ime);

    cout << "Unesite prosjek ucenika!\n";
    cin >> ucenik2.prosjek;

    int godine;
    cout << "Unesite koliko godina ucenik ima!\n";
    cin >> godine;

    cout << "Ispis podataka 1. ucenika:\n\n";
    cout << "Ime: " << ucenik1.ime << '\n';
    cout << "Prosjek: " << ucenik2.prosjek << '\n';

    cout << endl;

    cout << "Ispis podataka 2. ucenika:\n\n";
    cout << "Ime: " << ucenik2.ime << '\n';
    cout << "Prosjek: " << ucenik2.prosjek << '\n';
    cout << "Godine: " << ucenik2.godineUcenika(godine) << '\n';
    return 0;
}
/*
Deklarirati klasu ucenik sa varijablama ime i prosjek. Deklarirati dva objekta nad tom klasom. Prvom dodijeliti
vrijednosti, a za drugi korisniku omoguciti unos, a u main funkciji ispisati podatke o ucenicima.

Definirati funkciju (metodu) koja ce vratiti koliko godina drugi ucenik ima.
*/