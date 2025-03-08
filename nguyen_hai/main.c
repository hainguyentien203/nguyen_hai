#include <stdio.h>
void main() {
	int a;
	printf("Nhap vao gia tri so nguyen a: ");
	scanf_s("%d", &a);
	while (a == 0) {
		printf("Nhap lai gia tri khac khong, a:");
		scanf_s("%d", &a);
	}
	if (a > 0) {
		printf("a>0, la so nguyen duong.\n");
	}
	else printf("a<0, la so nguyen am.\n");
}