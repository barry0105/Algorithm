#include <stdio.h>
#include <stdlib.h>

int cmp(const void *first, const void *second) 
{
    if (*(int*)first > *(int*)second)
		return 1;
	else if (*(int*)first < *(int*)second)
		return -1;
	else
		return 0;
}

int binary_search(int *bowl, int key, int len)
{
    int first = 0;
    int last = len - 1;
    int middle = (first + last) / 2;
    while (first <= last) {
        if (bowl[middle] == key) {
            return 1;
        } else if (bowl[middle] > key) {
            last = middle - 1;
        } else {
            first = middle + 1;
        }
        middle = (first + last) / 2;
    }
    return 0;
}

int main()
{
    int n, m, i, num;
    int bowl[100000] = {0,};
    int search[100000] = {0, };

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &num);
        bowl[i] = num;
    }

    qsort(bowl, n, sizeof(int), cmp);

    scanf ("%d", &m);
    for (i = 0; i < m; i++) {
        scanf("%d", &num);
        printf("%d\n", binary_search(bowl, num, n));
    }

}