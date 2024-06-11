#include <stdio.h>
//논리연산자 : &&(and) , || (or) , !(not)

int main(void) {
    int i=1 , j=10, h=10 ;
    //printf("(i<j) && (++j>h) = %s\n",((i<j) && (++j>h)) ? "True" : "False");
    printf("(i>j) && (++j>h) = %s\n",((i>j) && (++j>h)) ? "True" : "False"); //i>j가 이미 False이기에 뒷쪽 연산을 수행하지않음
    printf("j = %d\n",j);
    
    // || 연산의 경우 좌항이 True인 경우 우항은 실행하지 않고 결과를 true로
    //printf("(i>j) || (++j>h) = %s\n",((i>j) || (++j>h)) ? "True" : "False");
    printf("(i<j) || (++j>h) = %s\n",((i<j) || (++j>h)) ? "True" : "False");
    printf("j = %d\n",j);

    
}
