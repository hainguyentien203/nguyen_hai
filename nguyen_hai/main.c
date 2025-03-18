#include <stdio.h>
#include <string.h>
#include <ctype.h>
char* nhap(char S[]) {
	do {
		printf("Nhap vao mot chuoi ky tu (khac rong): ");
		fflush(stdin);
		gets(S);
	} while (strcmp(S,"") == 0);
}
char* xuat(char S[]) {
	printf("%s\n",S);
}
char* tim_chuoi(char S[], char S_con[]) {
	int dem = 0;
	for (int i = 0; i < strlen(S); i++) {
	for (int j = 0; j < strlen(S_con); j++) {
		if (S[i + j] == S_con[j] && S[i+strlen(S_con)-1] == S_con [strlen(S_con)-1]) {
			printf("Chuoi con duoc tim thay tai vi tri %ld (dia chi: %p)\n",i, &S[i]);
			dem++;
			}
		}
	} if (dem==0) printf("Khong tim thay chuoi con trong chuoi chinh.\n");
}
void main() {
	char S[100] = { 0 };
	char S_con[100] = { 0 };
	nhap(S);
	printf("Chuoi vua nhap la: ");
	xuat(S);
	nhap(S_con);
	printf("Chuoi con vua nhap la: ");
	xuat(S_con);
	tim_chuoi(S,S_con);
}

