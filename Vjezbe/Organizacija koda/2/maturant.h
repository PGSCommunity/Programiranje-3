#ifndef MATURANT_H
#define MATURANT_H

#include "ucenik.h"

class Maturant : public Ucenik {
	protected:
		string predmetMaturskog;
	public:
		Maturant(string ime, string odjeljenje, string p);
		void Ispisi();
};

#endif
