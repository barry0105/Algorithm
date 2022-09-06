#include <stdio.h>

int main(){
    int map[10][10];

    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            scanf("%d",&map[i][j]);
        }
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            printf("%d",map[i][j]);
        }
    }
}
/*아직 푸는 중 https://codeup.kr/problem.php?id=1099*/