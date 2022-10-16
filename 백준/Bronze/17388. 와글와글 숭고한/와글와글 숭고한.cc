#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
int main(void) {

	int a[3];
	scanf("%d %d %d", &a[0], &a[1], &a[2]);
	if (a[0] + a[1] + a[2] >= 100)printf("OK");
	else {
		if (a[0] <= a[1] && a[0] <= a[2])printf("Soongsil");
		if (a[1] <= a[0] && a[1] <= a[2])printf("Korea");
		if (a[2] <= a[1] && a[2] <= a[0])printf("Hanyang");
	}
	return 0;
}