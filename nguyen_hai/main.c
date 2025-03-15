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
void pt_le(int a[], int n) {
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 != 0)
			printf(" %d ", a[i]);
		else ("Khong co phan tu le nao trong mang.");
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
	printf("Cac gia tri le trong mang la: ");
	pt_le(a, n);
	printf("\n");
}


