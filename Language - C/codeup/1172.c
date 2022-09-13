#include <stdio.h>

//함수 선언
void bubbleSort(int num[], int size);


int main(){
    int numbers[3];
    int len = sizeof(numbers)/sizeof(int);
    scanf("%d %d %d",&numbers[0], &numbers[1], &numbers[2]);
    bubbleSort(numbers, len);
    for(int i=0;i<len;i++){
        printf("%d ",numbers[i]);
    }
}

//버블 정렬
void bubbleSort(int num[], int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1-i;j++){
            if(num[j] > num[j+1]){
                int temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    } 
}
