#include<stdio.h>

int main() {
	int day, car[5];
	scanf("%d", &day);
	for (int i = 0; i < 5; i++) {
		scanf("%d", &car[i]);
	}

	int count = 0;
	for (int i = 0; i < 5; i++) {
		if (day == car[i]) count++;
	}
	printf("%d", count);
	return 0;
}
