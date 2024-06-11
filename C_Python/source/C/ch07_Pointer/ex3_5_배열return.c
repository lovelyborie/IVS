#include <stdio.h>
int* returnArray(int* ptr); //선언

int main(void) {
    int arr[] = {10,20,30};
    int* afterArr = returnArray(arr);
    printf("수정전 : ");
    for(int idx=0 ; idx<3 ; idx++){
        printf("arr[%d] = %d\t",idx,arr[idx]);
    }
    printf("\n수정후 : ");
    for(int idx=0 ; idx<3 ; idx++){
        //printf("afterArr[%d] = %d\t",idx,afterArr[idx]);
        printf("afterArr[%d] = %d\t",idx,*(afterArr+idx));
    }
}
int* returnArray(int* ptr){
    //*ptr = 99 ; //arr[0]을 바꾸는것 *(ptr+1) = 99  ==  ptr[1] = 99  즉 20=>99 //arr자체가 바뀐다
    static int resultArr[3] ; //그냥 int로 한다면 return후 값들을 청소 즉,주소값만 남겨놓음 =>static으로 청소방지
    for(int idx=0 ; idx<3 ; idx++){
        resultArr[idx] = ptr[idx];  //깊은복사 (값자체를 배낌)  cf)얕은복사 => 주소만
    }
    resultArr[1] = 99;
    return resultArr; //배열이자 포인터변수
}