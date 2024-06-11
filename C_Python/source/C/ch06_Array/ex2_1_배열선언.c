#include <stdio.h>
//배열(array) : 동일 자료형의 집합

int main(void) {
    //배열 선언
    int subway[3]; //subway에는 배열의 시작 주소가 적혀있다
    subway[0] = 30; subway[1] = 40; subway[2] = 50; //할당
    for(int idx=0 ; idx<3 ; idx++){
        printf("subway[%d]=%d\n",idx,subway[idx]);
    }
}