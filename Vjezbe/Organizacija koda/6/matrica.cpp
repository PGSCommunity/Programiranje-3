#include "matrica.h"

Matrica::Matrica() {
	cout << "Unesite dimenziju kvadratne matrice!\n";
	cin >> m;
}

void Matrica::unos() {
	cout << "Unesite clanove matrice!\n";
	
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < m; j++) {
			cin >> mat[i][j];
		}
	}
}

void Matrica::dijagonala() {
	int s = {0};
	
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < m; j++) {
			if (i == j) s += mat[i][j];
		}
	}
	
	cout << "Suma elemenata na glavnoj dijagonali je: " << s << '\n';
}
