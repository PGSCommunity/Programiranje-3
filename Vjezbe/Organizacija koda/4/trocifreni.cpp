#include "trocifreni.h"

void Trocifreni::unos() {
	unos:cout << "Unesite trocifreni broJ!\n";
	cin >> broj;
	
	if (broj < 100 || broj > 999) {
		cout << "Unijeti broj nije trocifren! Pokusaj te ponovo!\n";
		goto unos;
	} else {
		cout << "Uneseni broj: " << broj << '\n';
	}
}

int Trocifreni::suma() {
	int s = {broj / 100 + (broj / 10) % 10 + broj % 10};
	
	return s;
}

float Trocifreni::reciprocna() {
	float r = {1 / (float)(broj / 100) * 1 / (float)((broj / 10) % 10) * 1 / (float)(broj % 10)};
	
	return r;
}

bool Trocifreni::isArmstrong() {
	if (pow(broj / 100, 3) + pow((broj / 10) % 10, 3) + pow(broj % 10, 3) == broj) {
		return true;
	} else {
		return false;
	}
}
