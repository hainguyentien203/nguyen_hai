#include <stdio.h>
#include <math.h>
void main(){
	int n;
	printf("Nhap vao mot so tu nhien n: ");
	scanf_s("%d", &n);
	for (int i = 1; i < n; i++) {
		int nt = 0;
		for (int j = 1; j <= i; j++) {
			if (i % j == 0) nt++;
		} if (nt == 2) {
			printf("%d la so nguyen to\n", i);
		}
	}
}

