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
void tim_c(char S[100]) {
	int dem = 0;
	for (int i = 0; i < strlen(S); i++) {
		if (S[i] == 'c') {
			dem++;
			printf("ky tu c trong chuoi duoc tim thay tai vi tri %ld (dia chi: %p)\n", i, &S[i]);
		}
	} 
	if (dem == 0){
		printf("Khong co ky tu c nao duoc tim thay trong chuoi.");
	}
}
void main() {
	char S[100] = { 0 };
	nhap(S);
	printf("Chuoi vua nhap la: ");
	xuat(S);
	tim_c(S);
}

