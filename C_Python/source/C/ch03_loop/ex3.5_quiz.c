#include <stdio.h>

int main(void) {
    int input;
    printf("원하는 수를 입력하시오 :");
    scanf("%d",&input);
    for(int i=1 ; i<=9 ; i++){
        printf("%d x %d = %d\n",input,i,input*i);
    }
}