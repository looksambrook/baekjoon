#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main(void) {

    int lon,lo;
    char parlin[99999];

    while (1) {
        scanf("%s", parlin);
        if (parlin[0] == '0')break;
        lon = strlen(parlin);
        if (lon % 2 == 0)lo = lon / 2;
        else lo = lon / 2 + 1;
        for (int i = 0;i <= lo;i++)
        {
            if (parlin[i] == parlin[lon - i - 1])continue;
            else {
                printf("no\n");
                lon = 0;
                break;
            }
        }
        if (lon == 0)continue;
        else printf("yes\n");
    }
    return 0;
}