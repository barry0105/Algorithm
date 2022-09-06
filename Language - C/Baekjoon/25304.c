#include <stdio.h>

int main(){
    int realnumber;
    int count;
    int num1, num2;
    int sum = 0;
    scanf("%d",&realnumber);
    scanf("%d",&count);
    for(int i=0;i<count;i++){
        scanf("%d %d",&num1, &num2);
        sum += (num1*num2);
    }
    if(sum==realnumber){
        printf("Yes");
    }
    else{
        printf("No");
    }
}