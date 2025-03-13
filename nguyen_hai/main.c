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
	printf("Mang vua nhap la: ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", a[i]);
		tong = tong + a[i];
	}
	printf("tong = %d\n", tong);
	int max = a[0];
	for (int i = 1; i < 10; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	printf("So lon nhat trong mang la %d\n ", max);
	for (int i = 0; i < 10; i++) {
		if (a[i] == max) {
			printf("So lon nhat trong mang tai vi tri %d \n ", i);
		}
	}
}

