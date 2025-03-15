#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
	int a[5] = { 0 };
	printf("Nhap cac phan tu cua mang: \n");
	for (int i = 0; i < 5; i++) {
		printf("a[%d] = ", i);
		scanf_s("%d", &a[i]);
	}
	printf("Mang vua nhap la: \n");
	for (int i = 0; i < 5; i++) {
		printf(" a[%d] = %d ",i, a[i]);
	}
	int dem = 0;
	int max = a[0];
	printf("\n");
	for (int i = 0; i < 5; i++) {
		if (a[i] >= max) {
			max = a[i];
		}
	}
	for (int i = 0; i < 5; i++) {
		if (a[i]==max)
		printf("So lon nhat trong mang la %d, dung tai vi tri: %d\n",max, i);
	}
}

