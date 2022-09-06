#include <stdio.h>


int main(){
    int a, r, n;
    scanf("%d %d %d",&a,&r,&n);
    long long int num = a;
    for(int i=0;i<n-1;i++){
        num *= r;
    }
    printf("%lld",num);
}