#include <stdio.h>

void swap(int a, int b) ; //함수 선언

int main(void) {
    int a = 10 , b = 20;
    printf("swap() 호출 전 a주소 = %p, a값 = %d, b주소 =%p, b값 = %d\n",&a,a,&b,b);
    swap(a,b);
    printf("swap() 호출 후 a주소 = %p, a값 = %d, b주소 =%p, b값 = %d\n",&a,a,&b,b);
}

void swap(int a, int b){
    printf("함수 안 a주소 = %p, a값 = %d, b주소 =%p, b값 = %d\n",&a,a,&b,b);
    int temp = a;
    a = b;
    b = temp;
    printf("함수 안 a주소 = %p, a값 = %d, b주소 =%p, b값 = %d\n",&a,a,&b,b);
}