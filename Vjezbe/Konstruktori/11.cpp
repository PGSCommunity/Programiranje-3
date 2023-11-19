#include <iostream>
#include <string>
using namespace std;

class Student {
    protected:
        string ime, prezime, email, datumRodjenja;
    public:
        Student(string x, string y, string z, string q) {
            ime = x;
            prezime = y;
            email = z;
            datumRodjenja = q;
        }

        int ciklusStudija();
        int godinaStudija();
        void Ispisi();
        bool provjeriDatum();
};

int Student::ciklusStudija() {
    // Varijabla datumRodjena = dd/mm/gggg
    int godina = 2023;
    string uzmiGodinu = datumRodjenja.substr(6, 4);
    int pretvoriGodinuUInt = stoi(uzmiGodinu);

    int godinaStudenta = godina - pretvoriGodinuUInt;
    int ciklus{0};

    if (godinaStudenta >= 23 && godinaStudenta < 26) ciklus = 1;
    else if (godinaStudenta == 26) ciklus = 2;
    else if (godinaStudenta >= 27) ciklus = 3;
    else ciklus = 0;

    return ciklus;
}

int Student::godinaStudija() {
    int godina = 2023;
    string uzmiGodinu = datumRodjenja.substr(6, 4);
    int pretvoriGodinuUInt = stoi(uzmiGodinu);

    int godinaStudenta = godina - pretvoriGodinuUInt;
    int godinaStudija{0};

    // Ovo je uzas.
    if (godinaStudenta == 19) godinaStudija = 1;
    if (godinaStudenta == 20) godinaStudija = 2;
    if (godinaStudenta == 21) godinaStudija = 3;
    if (godinaStudenta == 23) godinaStudija = 4;
    if (godinaStudenta == 24) godinaStudija = 5;
    if (godinaStudenta == 25) godinaStudija = 6;
    if (godinaStudenta == 26) godinaStudija = 7;
    if (godinaStudenta >= 27) godinaStudija = 8;

    return godinaStudija;
}

void Student::Ispisi() {
    cout << "IME STUDENTA: " << ime << '\n'; 
    cout << "PREZIME STUDENTA: " << prezime << '\n'; 
    cout << "EMAIL STUDENTA: " << email << '\n'; 
    cout << "DATUM RODJENJA STUDENTA: " << datumRodjenja << '\n'; 
}

bool Student::provjeriDatum() {
    return (datumRodjenja.size() == 10) ? true : false;
}

int main() {
    Student s("Danin", "Sadzak", "sadzake@proton.me", "08/02/1998");
    cout << "CIKLUS STUDIJA STUDENTA: " << s.ciklusStudija() << '\n';
    cout << "GODINA STUDIJA STUDENTA: " << s.godinaStudija() << '\n';
    s.Ispisi();
    cout << s.provjeriDatum() << '\n';
    return 0;
}

/*
Napisati klasu Student koja sadrži sljedeće:
4 atributa tipa string: ime, prezime, email te datum rođenja
2 atributa tipa int: ciklus studija te godina studija
Funkciju ispisi koja ispisuje podatke o studentu
Funkciju provjeri_datum koja vraća true ukoliko je datum rođenja koji je postavljen u objektu validan, 
a false ukoliko niije. Za datum kažemo da je validan ukoliko je ovog formata “dd/mm/gggg”. 
Svaki validan datum će imati 10 karaktera. Prva dva karaktera u stringu su dan rođenja, 
zatim ide karakter “/”, pa idu dva karaktera za mjesec rođenja, zatim ponovo karakter “/”, 
i sljedeća 4 karaktera su za godinu rođenja. Ukoliko su dan ili mjesec jednocifreni, 
treba ispisati 0, dakle datum “4.5.2000” nije validan nego treba biti “04.05.2020”.
Kreirati nekoliko instanci ove klase i dodati ih u neki niz. Proći kroz niz i ispisati informacije o studentima.
*/