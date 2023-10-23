#include <iostream>
#include <cmath>
using namespace std;

class Pravougaonik {
    protected:
        double a, b;
    public:
        Pravougaonik();
        Pravougaonik(double A, double B);
        Pravougaonik(double A);
        double Obim();
        double Povrisna();
        double Dijagonala();
        void Ispisi();
};

Pravougaonik::Pravougaonik() {
    a = 1; 
    b = 1;
}

Pravougaonik::Pravougaonik(double A, double B) {
    if (A >= 0 || B >= 0) {
        a = A;
        b = B;
    } else {
        cout << "Jedan ili obadva parametra je negativan, parametri nisu validni.\n";
    }
}

Pravougaonik::Pravougaonik(double A) {
    if (A >= 0) a = A;
    else cout << "Vrijednost A je negativna. Parametar nije validan.\n";
}

double Pravougaonik::Obim() {
    return 2 * (a + b);
}

double Pravougaonik::Povrisna() {
    return a * b;
}

double Pravougaonik::Dijagonala() {
    return sqrt(a * a + b * b);
}

void Pravougaonik::Ispisi() {
    cout << "Ispis vrijednosti pravougaonika:\n\n";
    cout << "Povrsina: " << Povrisna() << '\n';
    cout << "Obim: " << Obim() << '\n';
    cout << "DIjagonala: " << Dijagonala() << '\n';
}

int main() {
    Pravougaonik pravougaonik1;
    Pravougaonik pravougaonik2(3, 4);
    Pravougaonik pravougaonik3(5);

    pravougaonik1.Ispisi();
    cout << endl;
    pravougaonik2.Ispisi();
    cout << endl;
    pravougaonik3.Ispisi();
    return 0;
}

/*
Napisati klasu Pravougaonik koja sadrži:
Atribute a i b tipa double koji predstavljaju dužine stranica pravougaonika
Defaultni konstruktor koji postavlja vrijednosti stranica na 1 ukoliko korisnik kreira Pravougaonik a ne 
proslijedi vrijednosti stranica
Konstruktor koji prima dva parametra A i B tipa double, koji postavlja atribute a i b na vrijednosti A i B redom
ukoliko su A i B pozitivni. Ukoliko je bar neki od njih negativan, korisniku treba ispisati da proslijeđeni
parametri nisu validni.
Konstruktor koji prima jedan parametar A tipa double, koji postavlja oba atributa a i b na vrijednost A. 
U suštini, ovaj konstruktor služi za lakše kreiranje kvadrata.
Funkciju obim unutar klase (metoda klase) koja vraća obim pravougaonika nad kojim se pozove
Funkciju povrsina unutar klase (metoda klase) koja vraća površinu pravougaonika nad kojim se pozove
Funkciju dijagonala koja vraća dužinu dijagonale pravougaonika	
Funkciju ispisi unutar klase koja ispisuje korisniku stranice pravougaonika, njegov obim i površinu, 
te dijagonalu, u odgovarajućem formatu.
*/