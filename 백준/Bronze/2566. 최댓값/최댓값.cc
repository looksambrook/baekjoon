#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {

    int i = 0, j, max = -1, a = 0, b = 0;
    char san[10][10];

    while (i < 9)
    {
        for (j = 0;j < 9;j++)
        {
            scanf("%d", &san[i][j]);
            getchar();
            if (max < (int)san[i][j]) {
                max = (int)san[i][j];
                a = i + 1, b = j + 1;
            }

        }

        i++;
    }

    printf("%d", max);
    puts("");
    printf("%d %d", a, b);

    return 0;
}
