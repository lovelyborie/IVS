#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(void) {
    srand( (unsigned int)time(NULL) ); //�����ʱ�ȭ
    int answer = rand()%100+1;
    int chance=5;
    int input;
    int left = 1; int right =100;
    while(chance>0){
        printf("%d�� %d ������ ���ڸ� ���� ������ >>\n",left,right);
        scanf("%d",&input);
        if(input == answer){
            printf("�����Դϴ�! %d������ ���߼̾��!\n",6-chance);
            break;
        }
        if(input<left || input >right){
            printf("%d�� %d �����ǻ����� ���ڸ� �Է����ּ���!\n",left,right);
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
        printf("��������\n");
    }
}