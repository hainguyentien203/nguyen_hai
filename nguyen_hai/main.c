#include <stdio.h>
#include <math.h>
int main(){
	int thu_nhap = 0;
	float thue = 0;
	printf("Nhap vao thu nhap hang thang: ");
	scanf_s("%d", &thu_nhap);
	if (thu_nhap <= 5000) {
		thue = thu_nhap * 0.05;
	}
	else if (thu_nhap <= 10000) {
		thue = 5000 * 0.05 + (thu_nhap-5000)*0.1;
	}
	else if (thu_nhap <= 18000) {
		thue = 5000 * 0.05 + 5000 * 0.1 + (thu_nhap-10000)*0.15;
	}
	else if (thu_nhap <= 32000) {
		thue = 5000 * 0.05 + 5000 * 0.1 + 8000 * 0.15 + (thu_nhap-18000)*0.2;
	}
	else if (thu_nhap <= 52000) {
		thue = 5000 * 0.05 + 5000 * 0.1 + 8000 * 0.15 + 14 * 0.2 + (thu_nhap-32000)*0.25;
	} else thue = 5000 * 0.05 + 5000 * 0.1 + 8000 * 0.15 + 14 * 0.2 + 20 * 0.25 + (thu_nhap-52000)*0.35;
	printf("Thue phai dong theo thu nhap %d la: %3f", thu_nhap, thue);
}

