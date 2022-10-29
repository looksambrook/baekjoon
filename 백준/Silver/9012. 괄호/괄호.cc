#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>

int main(void) {

	int count = 0, sum = 0, T;
	char san[51];

	scanf("%d", &T);
	for (int i = 0;i < T;i++)
	{
		count = 0;
		sum = 0;

		scanf("%s", san);
		for (int j = 0;san[j];j++)
		{
			if (san[j] == '(')count++;
			else count--;
			if(count<0) sum = -100;
		}
		if (sum != -100)sum = count;
		if (sum == 0)printf("YES\n");
		else printf("NO\n");
	}
	
	return 0;
}