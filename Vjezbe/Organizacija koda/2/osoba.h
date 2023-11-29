#ifndef OSOBA_H
#define OSOBA_H

#include <iostream>
using namespace std;

class Osoba {
    public:
        string ime;
        Osoba(string _ime);
        virtual void opisPosla();
        void Predstavljanje();
};


#endif