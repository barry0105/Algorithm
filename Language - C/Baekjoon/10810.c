#include <stdio.h>

int main()
{
    int n, m, i, j, k, e;
    int result[101] = {0, };

    scanf("%d %d", &n, &m);

    for (i = 0; i < m; i++) {
        scanf("%d %d %d", &j, &k, &e);
        for (j; j <= k; j++) {
            result[j] = e;
        }
    }
    
    for (i = 1; i <= n; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}