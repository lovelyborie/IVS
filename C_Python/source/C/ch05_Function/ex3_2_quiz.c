#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
int getRandomNumber(int level);
void showQuestion(int level,int num1,int num2);
int main(void) {
    srand((unsigned int) time(NULL));
    int num1,num2,input,answer;
    bool flag = true;
    for(int i=1 ; i<=3 ; i++){
        num1 = getRandomNumber(i); num2 = getRandomNumber(i);
        showQuestion(i,num1,num2);
        scanf("%d",&input);
        answer = num1 * num2 ;
        if(input == answer) {
            printf("%d단계 정답입니다.\n",i);
        }else{
            printf("%d단계 오답입니다.실패 종료입니다");
            flag = false;
            break;
        }
    }
    if(flag){
        printf("\n3단계까지 잘 오셨습니다.성공입니다");
    }
}

int getRandomNumber(int level) {
    return (rand()%4+1) + (level-1)*4;
}
void showQuestion(int level,int num1,int num2){
    printf("\n%d레벨 구구단을 외자~\n",level);
    printf("힌트 : %d x %d >>",num1,num2);
}