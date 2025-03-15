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
void nt (int a[], int n) {
	int nt = 0;
	for (int i = 0; i < n; i++) {
		int dem = 0;
		for (int j = 0; j <= i; j++) {
			if (a[i] % a[j] == 0) 
				dem++;
		}
		if (dem == 2) {
			printf(" %d ", a[i]);
			nt++;
		}
}
		if (nt==0) printf("Khong co so nguyen to nao trong mang!");
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
	printf("Cac so nguyen to trong mang la: ");
	nt(a, n);
	printf("\n");
}


