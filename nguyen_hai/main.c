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
void thay_am (int a[], int n) {
	for (int i = 0; i < n; i++) {
		if (a[i] < 0) {
			a[i] = 0;
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
	thay_am(a, n);
	printf("Mang sau khi thay the phan tu am bang 0 la: \n");
	xuat(a, n);
}


