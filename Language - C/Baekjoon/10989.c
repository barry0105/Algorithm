#include <stdio.h>

int main()
{
    int i, j, len = 0, num;
    int map[10001] = {0, };

    scanf("%d", &len);

    for (i = 0; i < len; i++) {
        scanf("%d", &num);
        map[num]++;
    }

    for (i = 1; i <= 10000; i++) {
        if (map[i] == 0) {
            continue;
        }
        
        for (j = 0; j < map[i]; j++) {
            printf("%d\n", i);
        }
    }

    return 0;
}
