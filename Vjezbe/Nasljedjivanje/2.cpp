#include <iostream>
#include <string>
using namespace std;

class Zivotinja {
    public:
        void glasanje();
        void spavaj();
        void jedi();
};

void Zivotinja::glasanje() {
    cout << "Mjauuuu\n";
}

void Zivotinja::spavaj() {
    cout << "Zzzzzzzz\n";
}

void Zivotinja::jedi() {
    cout << "Om nom nom, om nom\n";
}

class Macka: public Zivotinja {
    public:
        string ime;
        string vrsta;
};

int main() {
    Macka Garfild;

    Garfild.ime = "Garfild";
    Garfild.glasanje();
    cout << "Ime macke: " << Garfild.ime << '\n'; 
    return 0;
}

/*
Kreirati klasu Zivotinja koja ima metodu "glasanje", te metodu "spavaj" i "jedi". Kreirati klasu Macka koja 
nasljedjuje klasu Zivotinja te ima atribute ime i vrsta. U glavnom programu instincirati objekt klase Macka pod
imenom Garfild, pozvati funkciju za glasanje te ispisati ime macke.
*/