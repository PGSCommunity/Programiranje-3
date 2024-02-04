#include "niz.h"

Niz::Niz() {
	cout << "Unesite velicinu niza!\n";
	cin >> n;
}

void Niz::unos() {
	cout << "Unesite elemente niza!\n";
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

void Niz::SumaProizvod() {
	int s = {0}, p = {1};
	
	for(int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) s += a[i];
		if (a[i] % 3 != 0) p *= a[i];
	}
	
	cout << "Suma parnih brojeva niza je: " << s << '\n';
	cout << "Proizvod brojeva koji nisu djeljivi sa 3 je: " << p << '\n';
}
