#include <stdio.h>

int main(void) {
    int a = 1; 
    int b = 2;
    char *str = "Hello";
    printf("a변수 주소 :%p,변수값 :%d\n",&a,a);
    printf("b변수 주소 :%p,변수값 :%d\n",&b,b);
    printf("str변수 주소 :%p,문자열주소 :%p,문자열내용 :%s\n",&str,str,str);
    a=10 ; b=20; str = "Hi" ;
    printf("a변수 주소 :%p,변수값 :%d\n",&a,a);
    printf("b변수 주소 :%p,변수값 :%d\n",&b,b);
    printf("str변수 주소 :%p,문자열주소 :%p,문자열내용 :%s\n",&str,str,str);
}