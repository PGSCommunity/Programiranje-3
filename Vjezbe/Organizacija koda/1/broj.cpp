#include "broj.h"
#include <iostream>
using namespace std;

void Broj::unos() {
	cout << "Unesite broj:\n";
	cin >> b;
}

int Broj::dvostruka() {
	return 2 * b;
}
