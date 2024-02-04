#ifndef OSOBA_H
#define OSOBA_H

#include <iostream>
using namespace std;

class Osoba {
	public:
		string ime;
		Osoba(string i);
		virtual void opisPosla();
		void predstavljanje();
};

#endif
