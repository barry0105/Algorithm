#include <stdio.h>

int main(){
    char input;
    for(;;){
        scanf("%c ",&input);
        if (input == 'q'){
            printf("%c",input);
            break;
        }
        printf("%c\n",input);
    }
}
