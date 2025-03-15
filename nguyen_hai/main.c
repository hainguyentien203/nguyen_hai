#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
	int n = 0;
	int don_vi = 0;
	printf("Nhap vao so nguyen n can doc: ");
	scanf("%d", &n);
	while (n / (int)pow(10, don_vi))
	{
		don_vi++;
	}
	printf("don vi: %d\n", don_vi);
	for (int i = don_vi - 1; i >= 0; i--)
	{
		int tam = n / (int)pow(10, i);
		printf("%d", tam);
		switch (i)
		{
		case 6:
			printf(" ty ");
			break;
		case 5:
			printf(" tram ");
			break;
		case 4:
			printf(" muoi ");
			break;
		case 3:
			printf(" ngan ");
			break;
		case 2:
			printf(" tram ");
			break;
		case 1:
			printf(" muoi ");
			break;
		}
		n = n - tam * pow(10, i);
	}
}

