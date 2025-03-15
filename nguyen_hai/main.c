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
	int vt1 = 0;
	int vt2 = 0;
	do {
		printf("Nhap vi tri 2 so nguyen muon hoan vi: ");
		scanf_s("%d", &vt1);
		scanf_s("%d", &vt2);
	} while (vt1 < 0 && vt1 >= n && vt2 < 0 && vt2 >= n);
	swap(a, vt1, vt2);
	printf("Mang sau khi hoan vi la: ");
	xuat(a, n);
	printf("\n");
}


