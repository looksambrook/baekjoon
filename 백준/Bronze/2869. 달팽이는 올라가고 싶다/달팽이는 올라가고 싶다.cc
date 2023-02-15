#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int day, night, meter, sum;
	scanf("%d %d %d", &day, &night, &meter);
	sum = (meter - night - 1) / (day - night) + 1;
	printf("%d", sum);
	return 0;
}