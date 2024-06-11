#include <stdio.h>

int main(void) {
    int a = 1; 
    int b = 2;
    printf("a변수 주소: %p\t 값 :%d\n",&a,a);
    printf("b 주소: %p\t 값 :%d\n",&b,b);
    int *pointer = &a;
    printf("pointer 변수가 가르키는 주소 :%p\t값:%d\n",pointer,*pointer);
    pointer =&b;
    printf("pointer 변수가 가르키는 주소 :%p\t값:%d\n",pointer,*pointer);


}