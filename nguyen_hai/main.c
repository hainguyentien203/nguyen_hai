#include <stdio.h>
#include <string.h>
#include <ctype.h>
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
void inhoa(char S[100]) {
	for (int i = 0; i < strlen(S); i++) {
		if (S[i] >= 'a' && S[i] <= 'z'); {
			S[i] = toupper(S[i]);
		}
	}
}
void main() {
	char S[100] = { 0 };
	nhap(S);
	xuat(S);
	inhoa(S);
	printf("Chuoi sau khi thay the chu thuong thanh chu in hoa la :\n");
	xuat(S);
}

