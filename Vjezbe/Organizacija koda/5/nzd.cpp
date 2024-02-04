#include "nzd.h"

void NZD::unos() {
	cout << "Unesite dva broja!\n";
	cin >> x >> y;
}

void NZD::nzd() {
	while (y > 0) {
		int ostatak = x % y;
        x = y;
        y = ostatak;
	}
	
	cout << "NZD za ucitana broja je: " << x << '\n';
}
