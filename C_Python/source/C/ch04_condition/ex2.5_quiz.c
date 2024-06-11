#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(void) {
    srand( (unsigned int)time(NULL) ); //난수초기화
    int answer = rand()%100+1;
    int chance=5;
    int input;
    int left = 1; int right =100;
    while(chance>0){
        printf("%d와 %d 사이의 숫자를 맞춰 보세요 >>\n",left,right);
        scanf("%d",&input);
        if(input == answer){
            printf("정답입니다! %d번만에 맞추셨어요!\n",6-chance);
            break;
        }
        if(input<left || input >right){
            printf("%d와 %d 사이의사이의 숫자를 입력해주세요!\n",left,right);
            chance--;
            continue;
        }
        if(input < answer){
            if(chance!=1){
                printf("up\n");
                left = input+1;
            }
        }else {
            if(chance!=1){
                printf("down\n");
                right = input-1;
            }
        }
        chance--;
    }
    if(chance == 0){
        printf("예측실패\n");
    }
}