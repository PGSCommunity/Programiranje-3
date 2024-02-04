#ifndef VOZAC_H
#define VOZAC_H

#include "osoba.h"

class Vozac : public Osoba {
	public:		
		Vozac(string i);
		void opisPosla();
		void predstavljanje();
};

#endif
