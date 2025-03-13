#include <stdio.h>
#include <math.h>
#include <string.h>
void main() {
	char str[] = "Xin chao";
	int dem = 0;
	int demkitu = 0;
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			dem++;
		}
	}
		while (str[demkitu] != 0) {
			demkitu++;
		}
	printf("Co %d ki tu \n", demkitu);
	printf("Co %d ki tu hoa\n", dem);
}

