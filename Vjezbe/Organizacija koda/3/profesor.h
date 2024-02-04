#ifndef PROFESOR_H
#define PROFESOR_H

#include "osoba.h"

class Profesor : public Osoba {
	public:
		Profesor(string i);
		void opisPosla();
		void predstavljanje();
};

#endif
