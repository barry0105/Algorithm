#include <stdio.h>

int main()
{
    int bowl[101] = {0, };
    int i, j, k, n, m, tmp, o;

    scanf("%d %d", &n, &m);

    /* init */
    for (i = 0; i < n; i++) {
        bowl[i] = i+1; 
    }

    for (i = 0; i < m; i++) {   
        scanf("%d %d", &j, &k);
        tmp = bowl[j - 1];
        bowl[j - 1] = bowl[k - 1];
        bowl[k - 1] = tmp;
    }

    for (i = 0; i < n; i++) {
        printf("%d ", bowl[i]);
    }

    return 0;
}  