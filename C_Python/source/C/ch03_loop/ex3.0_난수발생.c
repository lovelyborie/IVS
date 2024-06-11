#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//난수발생 전 초기화 작업 필수 (C한정)
//rand() : 0 ~ 32767 까지의 난수 발생 
int main(void){
    srand( (unsigned int)time(NULL) ); //난수초기화
    printf("%d\n",rand()%100); //0~100
    printf("%d\n",rand()%100+1); //1~100
    printf("%d\n",rand()%100);
}