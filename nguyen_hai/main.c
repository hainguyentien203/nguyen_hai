#include <stdio.h>
//int gt(int n) {
//	if (n == 1) return 1;
//	else return gt(n - 1) * n;
//}
void main() {
	int n;
	int gt=1;
	printf("Nhap vao mot so tu nhien n: ");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		gt = gt * i;
	}
	printf("Giai thua cua so vua nhap la: %d", gt);
}

