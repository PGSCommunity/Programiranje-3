#include "broj.h"
#include <iostream>
using namespace std;

Broj::unos() {
	cout << "Unesite broj:\n";
	cin >> b;
}

Broj::dvostruka() {
	return 2 * b;
}
