#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
	int tong = 0;
	int dem=0;
	float tbc = 0;
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
	printf("\n");
	for (int i = 0; i < 5; i++) {
		if (a[i] % 2 != 0) {
			dem++;
			tong = tong + a[i];
		}
	}
	if (dem > 0) {
		printf("Trung binh cong cac so le trong mang la: %f\n", tbc = (float)tong / dem);
	}
	else printf("Khong co phan tu le trong mang.");
}

