#include <iostream>
#include <cmath>
using namespace std;

const float Najam = 700;
const float cijenaKugleSladoleda = 6;
const float placaDoprinosi = 2400;

class Zarada {
    private:
        float cijenaPoKolacu;
    public:
        Zarada(float prosjecnaCijenaKolaca) {
            cijenaPoKolacu = prosjecnaCijenaKolaca;
        }
        float prodajaKolaca();
        ~Zarada() {}
};

float Zarada::prodajaKolaca() {
    return ceil(Najam / cijenaPoKolacu);
}

class Sladoled {
    public:
        float prodajaSladoleda();
};

float Sladoled::prodajaSladoleda() {
    return ceil(placaDoprinosi / cijenaKugleSladoleda);
}

int main() {
    float 
    prosjecnaCijenaKolaca;
    cout << "Unesi cijenu jednog kolaca: ";
    cin >> prosjecnaCijenaKolaca;
    Zarada z(prosjecnaCijenaKolaca);
    Sladoled s;
    cout << "Da bi se pokrio mjesecni najam potrebno je dnevno prodati najmanje " << z.prodajaKolaca() << " kolaca po prosjecnoj cijeni " << prosjecnaCijenaKolaca << "KM.\n";
    cout << "Da bi ste zaradili platu i doprinose morate prodati " << s.prodajaSladoleda() << " kugli slaodleda dnevno.\n";
    return 0;
}

/*
Gospođa Jagoda otvara slastičarnu. Mjesečni najam prostora je košta 700KM (postavi kao globalnu konstantu).
a. Napiši klasu zarada koja će imati private varijablu cijenaPoKolacu.

b. funkcija prodajaKolaca treba vratiti u main koliko kolača će morati prodati dnevno (sama unosi prosječnu 
cijenu kolača u KM iz maina preko konstruktora) da bi pokrila trošak najma. Ispis treba biti iz maina zaokružen
na prvi veći cijeli broj kolača upotrebom prikladne funkcije.

c. osim kolača gospođa Jagoda planira prodavati i sladolede čija je cijena 6KM/kugli (postavi kao globalnu 
konstantu). Funkcija klase sladoled treba u main vratiti koliko kugli sladodela treba prodati dnevno, da bi 
zaradila za svoju platu i doprinose koji mjesečno iznose 2400 KM (postavi kao globalnu konstantu). Ispis treba
biti iz maina zaokružen na prvi veći cijeli broj upotrebom prikladne funkcije.

d. Ne zaboravi kreirati konstruktor i destruktor!
*/