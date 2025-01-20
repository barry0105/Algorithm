#include <stdio.h>

int main()
{
    long long int data[3];
    scanf("%lld %lld %lld", &data[0], &data[1], &data[2]);
    printf("%lld\n", data[0] + data[1] + data[2]);
    return 0;
}