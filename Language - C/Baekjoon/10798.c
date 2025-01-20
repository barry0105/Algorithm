#include <stdio.h>

int main()
{
    char data[5][16] = {0, };
    int i, j;

    for (i = 0; i < 5; i++) {
        scanf("%s", data[i]);
    }

    for (i = 0; i < 16; i++) {
        for (j = 0; j < 5; j++) {
            if (data[j][i] == '\0') {
                continue;
            }
            printf("%c", data[j][i]);
        }
    }

    return 0;
}