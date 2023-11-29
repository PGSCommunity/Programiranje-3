#ifndef UCENIK_H
#define UCENIK_H
#include <iostream>
using namespace std;

class Ucenik {
    protected:
        string ime, odjeljenje;
    public:
        Ucenik(string i, string o);
        void Ispisi();
};

#endif