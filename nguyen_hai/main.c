#include <stdio.h>
#include <string.h>
#include <math.h>
float fx(float x) {
	return x * x;
}
float gx(float x) {
	return sin(x) + 1;
}
typedef float (*controham) (float);
float tich_phan(int a, int b, controham g) {
	float h = abs(b - a) / 1000.0;
	float s = 0;
	for (int i = 0; i < 1000; i++) {
		float db = g(a + i * h);
		float dl = g(a + (i + 1) * h);
		s = s + (db + dl) / 2 * h;
	}
	return s;
}
void main() {
	tich_phan(1, 2, fx);
	tich_phan(1, 2, gx);
}
