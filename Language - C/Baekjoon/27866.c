#include <stdio.h>

int main()
{
    char data[1000] = "";
    int ptr = 0;
    scanf("%s", data);
    scanf("%d", &ptr);

    printf("%c", data[ptr - 1]);

    return 0;
}