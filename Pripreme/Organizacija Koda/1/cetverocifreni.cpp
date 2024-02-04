#include "cetverocifreni.h"

void Cetverocifreni::Unos() {
	unos:cout << "Unesite cetverocifreni broj!\n";
	cin >> N;
	
	if (N < 1000 || N > 9999) {
		cout << "Broj nije cetverocifreni!\n";
		goto unos;
	} else {
		cout << "Uneseni broj: " << N << '\n';
	}
}

void Cetverocifreni::Tablica() {
	cout << "Tablica mnozenja za broj " << N << '\n';
	
	for(int i = 0; i <= 10; i++) {
		cout << N << " * " << i << " = " << N * i << '\n';
	}
}

// Koja je poenta ovoga ako ce rezultat uvijek biti inf?
int Cetverocifreni::Faktorijel() {
	int rezultat = {1};
	
	for (int i = 1; i <= N; i++) {
		rezultat *= i;
	}
	
	return rezultat;
}

int Cetverocifreni::sumaParnih() {
	int n_kopija = {N};
	int zbir = {0};
	while (n_kopija > 0) {
		int d = n_kopija % 10;
		if (d % 2 == 0) zbir += d;
		n_kopija /= 10;
	}
	return zbir;
}
