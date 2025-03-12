#include <stdio.h>
#include <math.h>
void main(){
	int n;
	double tongtien= 0;
	double tienlai=8.2/100;
	double tiengui=0;
	double nam=0;
	printf("Nhap vao so tien gui ban dau: ");
	scanf_s("%lf", &tiengui);
	printf("Nhap so nam gui: ");
	scanf_s("%lf", &nam);
	tongtien = tiengui * pow(1 + tienlai, nam);
	printf("Tong so tien nhan duoc khi gui %3f sau %3f nam la: %3f", tiengui, nam, tongtien);
}

