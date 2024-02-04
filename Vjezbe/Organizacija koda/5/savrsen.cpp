#include "savrsen.h"

void Savrsen::unos() {
	cout << "Unesite broj!\n";
	cin >> broj;
}

bool Savrsen::isSavrsen() {
	int zbir = {0};
	
	for(int i = 1; i < broj; i++) {
		if (broj % i == 0) {
			zbir += i;
		}
	}
	
	if (zbir == broj) return true;
	else return false;
}
