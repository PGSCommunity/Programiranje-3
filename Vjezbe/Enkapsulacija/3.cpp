#include <iostream>
using namespace std;

class Kvadrat {
    private:
        int a;
    public:
        void setStranice(int x) {
            a = x;
        }
        int getPovrsina() {
            return a * a;
        }
        int getObim() {
            return 4 * a;
        }
};

int main() {
    int a;
    cout << "Unesite stranicu a!\n";
    cin >> a;

    Kvadrat k;
    k.setStranice(a);
    cout << "Povrsina kvadrata iznosi: " << k.getPovrsina() << '\n';
    cout << "Obim kvadrata iznosi: " << k.getObim() << '\n';
    return 0;
}

/*
Deklarisati klasu kvadrat koji ima privatnu varijablu a. U glavnom dijelu, prave se tri metode. Prva metoda je 
setter koji uzima stranicu kvadrata, a druge dvije funkcionisu kao getter. Jedna getPovrsina koja vraca povrsinu
kvadrata, a druga getObim koja vraca povrsinu obima kvadrata. U main funkciji korisnik treba da sam unese stranicu
a. 
*/