#include "trougao.h"

Trougao::Trougao(int x, int y) {
	a = x;
	h = y;
}

float Trougao::povrsina() {
	return 0.5 * a * h;
}
