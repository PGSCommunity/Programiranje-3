#include <iostream>
using namespace std;

int main() {

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