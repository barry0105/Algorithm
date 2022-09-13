#include <stdio.h>
int main(){
    int map[10][10]; //10 * 10 크기의 집 생성
    int x = 1, y = 1; // 개미는 무조건 1,1에서부터 시작
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            scanf("%d",&map[i][j]);
        }
    }
    
    // 2가 아닌동안 비교하고 증감 반복
    while(map[y][x] != 2){
        if(map[y][x] == 0){
            map[y][x] = 9;
            if(map[y][x+1] != 1){
                x++;
            }
            else if(map[y+1][x] != 1){
                y++;
            }
        }
        else{
            break;
        }
         if(y==9 && x==9){
                break;
        }

    }
    if(map[y][x] != 1){
        map[y][x] = 9; // 2일때 종료했기 때문에 마지막 2도 9로 만들어줌
    }
    
    //출력
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            printf("%d ",map[i][j]);
        }
        printf("\n");
    }
}