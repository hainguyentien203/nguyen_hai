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
void dem_cach (char S[100]) {
	int d = 0;
	for (int i=0;i<strlen(S);i++)
	{	if (S[i]== ' ')
		d++;
	}
	printf("Co %d ki tu cach trong chuoi.", d);
}
void main() {
	char S[100] = { 0 };
	nhap(S);
	xuat(S);
	dem_cach(S);
}

