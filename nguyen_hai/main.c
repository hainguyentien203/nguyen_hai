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
void dem (char S[100]) {
	int d = 0;
	for (int i = 0; i < strlen(S); i++) {
		if (S[i] != ' ' && (S[i + 1] == ' ' || S[i + 1] == '\0'))
			d++;
	}
	printf("chuoi co %d ki tu.", d);
}
void main() {
	char S[100] = { 0 };
	nhap(S);
	xuat(S);
	dem(S);
}

