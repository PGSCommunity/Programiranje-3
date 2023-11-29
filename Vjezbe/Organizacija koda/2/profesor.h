#ifndef PROFESOR_H
#define PROFESOR_H

#include <iostream>
#include "osoba.h"
using namespace std;

class Profesor: public Osoba {
    public:
        Profesor(string _ime);
        void opisPosla();
};

#endif