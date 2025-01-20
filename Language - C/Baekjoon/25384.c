#include <stdio.h>

int main()
{
    int bytes = 0;
    int i = 0;

    scanf("%d", &bytes);

    for (i = 0; i < (bytes / 4); i++) {
        printf("long ");
    }
    printf("int");

    return 0;
}