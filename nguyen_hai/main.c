#include <stdio.h>
#include <conio.h>
#include <math.h>
void nhap(int a[], int n) {
	for (int i = 0; i < n; i++) {
		printf("a[%d] = ", i);
		scanf_s("%d", &a[i]);
	}
}
void xuat(int a[], int n) {
	for (int i = 0; i < n; i++) {
		printf(" a[%d] = %d ", i, a[i]);
	}
	printf("\n");
}
void swap (int a[], int i, int j) {
	int tg = a[i];
	a[i] = a[j];
	a[j] = tg;
}
void sap_xep(int a[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				swap(a, i, j);
			}
		}
	}
}
void main()
{
	int a[30] = { 0 };
	int n = 0;
	do {
		printf("Nhap so phan tu cua mang : n = ");
		scanf_s("%d", &n);
	} while (n <= 0 || n >= 30);
	nhap(a, n);
	printf("Mang vua nhap la: \n");
	xuat(a, n);
	sap_xep(a, n);
	printf("Mang sau khi sap xep theo thu tu tang dan la: ");
	xuat(a, n);
	printf("\n");
}


