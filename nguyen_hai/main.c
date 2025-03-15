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
	printf("%s\n",S);
}
void in1 (char S[100]) {
	int d = 0;
	for (int i = 0; i < strlen(S); i++) {
		if (S[i] != ' ' && (i == 0 || S[i - 1] == ' '))
			S[i] = toupper(S[i]);
	}
}
void main() {
	char S[100] = { 0 };
	nhap(S);
	printf("Chuoi vua nhap la: ");
	xuat(S);
	printf("Ham sau khi in hoa chu cai dau tien la: ");
	in1(S);
	xuat(S);
}

