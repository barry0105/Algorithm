#include <stdio.h>

int main()
{
    int size = 0;
    int input = 0;
    int result_map[201] = {0, };
    int i = 0;

    scanf("%d", &size);

    for (i = 0; i < size; i++) {
        scanf("%d", &input);
        result_map[input + 100]++;
    } 

    scanf("%d", &input);
    printf("%d", result_map[input + 100]);
    return 0;
}