#include <iostream>
#include <stdio.h>
#include "broj.h"
using namespace std;

int main() {
    Broj broj;
    
    broj.unos();
    printf("Dvostruka vrijednost unesenog broja je: %d\n", broj.dvostruka());
    return 0;
}

/*
Sljedecu klasu postavi u pakete:
class Broj{
    int b;
public:
    void unos(){
        cout<<"Unesite broj ";
        cin>>b;
    }  
    int dvostruka(){
        return 2*b;
    }
};  
*/
