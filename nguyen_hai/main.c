#include <stdio.h>

void main() {
	float n;
	float tong=0;
	printf("Nhap vao so nguyen n: ");
	scanf_s("%f", &n);
	for (int i = 0; i <= n; i++)
	{
		if (i % 2 == 0) {
			tong = tong + i;
		}
	}
	printf("Tong cua cac so chan tu 1 den n la: %f", tong);
}

