#include <stdio.h>

struct point{
    int num;
    int gas;
};
int main(){
int count;
scanf("%d",&count);
struct point before[101];

for(int i=0;i<count;i++){
scanf("%d %d", &before[i].num, &before[i].gas);
}
for(int i=0; i<count-1;i++){
    for(int j=i;j<count;j++){
        if(before[i].num > before[j].num){
            int tmp = before[i].num;
            before[i].num = before[j].num;
            before[j].num = tmp;
            int temp = before[i].gas;
            before[i].gas = before[j].gas;
            before[j].gas = temp;
        }
    }
}
for(int i=0;i<count;i++){
    printf("%d %d\n",before[i].num, before[i].gas);
}
}