#include <stdio.h>
void main(){
	int n;
	int dem=0;
	printf("Nhap vao mot so n: ");
	scanf_s ("%d", &n);
	while (n != 0) {
		dem++;
		printf("Vui long nhap lai: ");
		scanf_s("%d", &n);
		if (dem >= 4) {
			printf("ban da nhap sai qua so lan cho phep!");
				break;
		}
	}
}

