#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int xulychuoi(char* str) {
	char* tu_khoa = "led_2: ";
	char* search = strstr(str, tu_khoa);
	search = search + strlen(tu_khoa);
	int dem = 0;
	while (search[dem] != ',') {
		dem++;
	}
	//char str[32] = { 0 };
	char* str = malloc(dem + 1);//cap phat dong dem+1 byte
	//for (int i = 0; i < dem + 1; i++) {
	//	str[i] = 0;
	//}
	memset(str, 0, dem + 1); // tuong duong ham for tren.
	/*for (int i = 0; i < dem; i++) {
		str[i] = search[i];
	}*/
	memcpy(str, search, dem);
	if (strcmp(str, "on") == 0) {
		free(str);
		return 1;
	}
	else if (strcmp(str, "off") == 0) {
		free(str);
		return 0;
	}
}
void main() {
	char* str = "led_1: on, led_2: off, led_3: on";
	char* led_2 = "led_2: ";

}
