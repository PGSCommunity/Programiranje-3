#include <iostream>
#include <cmath>
using namespace std;

class Trougao {
    public:
        void povrsina(float a, float b);
};

void Trougao::povrsina(float a, float b) {
    int h = sqrt(pow(a, 2) - pow(b/2, 2));
    cout << "Povrsina iznosi: " << (a * h) / 2 << '\n';
}

int main() {
    Trougao t;
    int a, b;
    cout << "Unesite osnovicu i krak!\n";
    cin >> a >> b;

    t.povrsina(a, b);
    return 0;
}
/*
Deklarirati klasu trougao i metodu povrsina. Na osnovu unesene osnovice i kraka ispisati povrsinu jednakokrakog 
trougla. U glavnoj funkciji se unose vrijednosti osnovice i kraka i poziva funkcija pomocu objekta 
(sama vrijednost povrsine se ispisuje unutar funckije).
*/