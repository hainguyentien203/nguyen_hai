#include <stdio.h>
#include <string.h>
void nhap(char S[100]) {
	do {
		printf("Nhap vao mot chuoi ky tu (khac rong): ");
		fflush(stdin);
		gets(S);
	} while (strcmp(S,"") == 0);
}
void xuat(char S[100]) {
	printf("Chuoi vua nhap la: %s\n",S);
}
void dem(char S[100]) {
	int dem_kt = 0;
	while (S[dem_kt] != 0) {
		dem_kt++;
	}
	printf("Co %d ki tu trong chuoi.", dem_kt);
}
void main() {
	char S[100] = { 0 };
	nhap(S);
	xuat(S);
	dem(S);
}

