#ifndef VOZAC_H
#define VOZAC_H

#include <iostream>
#include "osoba.h"
using namespace std;

class Vozac: public Osoba {
    public:
        Vozac(string _ime);
        void opisPosla();
        void Predstavljanje();
};

#endif