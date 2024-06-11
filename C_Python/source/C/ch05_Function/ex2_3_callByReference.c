#include <stdio.h>
// Call by value vs Call by reference
void sum(int from,int to, int* tot); //tot는 int값이 아니라 tot에 저장된 주소로 가면 int값이 있다.

int main(void) {
    int a=1 , b=10 ,tot ; //int* tot; //a는 1이 들어있고 b에는 10이 들어있고 tot에는 주소가 적혀있다.
    sum(a,b,&tot);
    printf("%d부터 %d까지 누적합은 %d\n",a,b,tot);
    a = 10 ; b= 100;
    sum(a,b,&tot);
    printf("%d부터 %d까지의 누적합은 %d\n",a,b,tot);
}

void sum(int from,int to,int* tot){
    *tot = 0 ; //tot에 적혀있는 주소값에 0을 넣어라
    for(int i= from ; i<=to ; i++){
        *tot += i;
    }
}