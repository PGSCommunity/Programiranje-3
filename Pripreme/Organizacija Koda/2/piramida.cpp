#include "piramida.h"

Piramida::Piramida() {
	cout << "Unesite stranicu i visinu piramide!\n";
	cin >> a >> l;
}

float Piramida::povrsina() {
	return (3 * sqrt(3) / 2) * pow(a, 2) + 3 / 2 + a * l;
}
