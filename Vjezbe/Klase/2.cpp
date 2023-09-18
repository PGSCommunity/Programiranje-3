#include <iostream>
#include <string>
using namespace std;

class Auto {
    public:
        string model;
        string boja;
        double brzina;
        double novcanaKazna(double iznos);
};

double Auto::novcanaKazna(double iznos) {
    return iznos;
}

int main() {
    Auto auto1, auto2;

    auto1.model = "Ferrari";
    auto1.boja = "crne";
    auto1.brzina = 314;

    cout << "Unesite model auta!\n";
    getline(cin, auto2.model);

    cout << "Unesite boju auta!\n";
    getline(cin, auto2.boja);

    cout << "Unesite brzinu auta!\n";
    unos:cin >> auto2.brzina;

    if (auto2.brzina > auto1.brzina) goto unos;

    cout << "Ja vozim " << auto1.model << " auto, " << auto1.boja << " boje i jurim " << auto1.brzina << " kilometara na sat.\n";
    cout << "Moj drug vozi " << auto2.model << " auto, " << auto2.boja << " boje i ne juri bas jer vozi " << auto2.brzina << " kilometara na sat.\n";

    double iznosKazne;
    cout << "Unesite iznos novcane kazne prvog vozaca!\n";
    cin >> iznosKazne;

    cout << "Posto sam jurio " << auto1.brzina << " kilometara na sat morao sam platiti novcanu kaznu od " << auto1.novcanaKazna(iznosKazne) << " maraka :((\n";
    return 0;
}
/*
Deklarirati klasu auto sa varijablama model, boja, i brzina. Deklarirati dva objekta nad tom klasom prvom.
Prvom dodijeliti vrijednosti, za drugi omoguciti korisniku unos, a u main funkciji treba da stoji ispis:
"Ja vozim ... auto, ... boje i jurim ... kilometara na sat"
"Moj drug vozi ... auto, ... boje i ne juri bas jer vozi ... kilometara na sat"

Definirati funkciju (metodu) koja ce vratiti iznos novcane kazne za prvog vozaca
*/