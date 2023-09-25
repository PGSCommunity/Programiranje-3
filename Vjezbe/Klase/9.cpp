#include <iostream>
using namespace std;

class Interval {
    public:
        int suma(int x, int y);
        int brojParnih(int x, int y);
};

int Interval::suma(int x, int y) {
    int s(0);
    for(int i = x; i <= y; i++) {
        s += i;
    }
    return s;
}

int Interval::brojParnih(int x, int y) {
    int br(0);
    for(int i = x; i <= y; i++) {
        if(i % 2 == 0) br++;
    }
    return br;
}

int main() {
    Interval i;
    int x, y;

    cout << "Od broja?\n";
    cin >> x;
    
    cout << "Do broja?\n";
    cin >> y;
    
    cout << "Suma brojeva u intervalu: " << i.suma(x, y) << '\n';
    cout << "Broj parnih brojeva u intervalu: " << i.brojParnih(x, y) << '\n'; 
    return 0;
}
/*
Deklarirati klasu interval koja u javnom dijelu ima metode suma i broj parnih. Metode su sa argumentima a racunaju
i ispisuju broj parnih brojeva i sumu u intervalu x, y. U glavnoj funkciji se deklarira objekt nad klasom i unose 
vrijednosti intervala x, y.
*/