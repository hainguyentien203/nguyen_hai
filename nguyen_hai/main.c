#include <stdio.h>
#include <math.h>
int min(int A, int B) {
	int min = A;
	if (B < min) min = B;
	return min;
}
int UCLN(int A, int B) {
	for (int i = min(A, B); i > 0; i--) {
		if (A % i == 0 && B % i == 0)
			return i;
	}
}
void main(){
	int A, B,c;
	printf("Nhap gia tri cua so nguyen A: ");
	scanf_s("%d", &A);
	printf("Nhap gia tri cua so nguyen B: ");
	scanf_s("%d", &B);
	printf("UCLN giua %d va %d la : %d", A, B, UCLN (A,B));
}

