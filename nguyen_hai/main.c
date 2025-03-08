#include <stdio.h>
void main() {
	int a, b, c;
	printf("Nhap vao 3 so nguyen a, b, c: ");
	scanf_s("%d %d %d", &a,&b,&c);
	int max = a;
	if (b > max) {
		max = b;
	}
	if (c > max) {
		max = c;
	}
	 printf("Gia tri lon nhat cua 3 so nay la max = %d", max);
}