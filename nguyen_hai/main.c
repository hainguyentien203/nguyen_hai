#include <stdio.h>
#include <math.h>
#include <conio.h>
void main() {
	int a[10] = { 0 };
	int tong = 0;
	for (int i = 0; i < 10; i++) {
		printf("a[%d] = ", i);
		scanf_s("%d", &a[i]);
	}
	for (int i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	for (int i = 0; i < 10; i++) {
		tong = tong + a[i];
	}
	printf("tong = %d", tong);
}

