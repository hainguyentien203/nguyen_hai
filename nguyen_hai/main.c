#include <stdio.h>
void main() {
	int n;
	printf("Nhap vao gia tri so nguyen n: ");
	scanf_s("%d", &n);
	if (n%2==0) {
		printf("n la so Chan.\n");
	}
	else printf("n la so Le.\n");
}