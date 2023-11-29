#ifndef MATURANT_H
#define MATURANT_H

#include <iostream>
#include "ucenik.h"
using namespace std;

class Maturant: public Ucenik {
    protected:
        string predmetMaturskog;
    public:
        Maturant(string ime, string odjeljenje, string predMat);
        void Ispisi();
};


#endif