#include <iostream>
#include "osoba.h"
#include "vozac.h"
#include "profesor.h"

using namespace std;

int main(int argc, char** argv) {
	Osoba o("Danin");
	o.predstavljanje();
	
	Vozac v("Sarah");
	v.predstavljanje();
	
	Profesor p("Edin");
	p.predstavljanje();
	return 0;
}

/*
Sljedeci kod raspodijeli u pakete:


class Osoba{
public:
string ime;
Osoba(string _ime) : ime(_ime){}
// virtualna metoda opisPosla!
virtual void opisPosla(){
cout << ime << " nesto radi!" << endl;
}
void predstavljanje(){
	cout << "Predstavljamo zanimanja!\n";
	opisPosla();
}
};

class Vozac : public Osoba{
public:
Vozac(string _ime) : Osoba(_ime){}
// implementacija metode opisPosla u klasi Vozac!
void opisPosla(){
cout << ime << " je vozac!" << endl;
}
void predstavljanje(){
	cout << "Ovo zanimanje je dinamicno!\n";
	opisPosla();
}
};



class Profesor : public Osoba{
public:
Profesor(string _ime) : Osoba(_ime){}
// implementacija metode opisPosla u klasi Profesor!
void opisPosla(){
cout << ime << " je profesor!" << endl;
}
};
*/
