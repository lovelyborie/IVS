#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
int* make_lotto();
void sort(int* arr, int cnt); //함수선언 (cnt:배열방의 갯수)

int main(void) {
    int* lotto = make_lotto();
    sort(lotto,6);
    printf("lotto num : ");
    for(int idx=0 ; idx<6 ; idx++){
        printf("%d\t",lotto[idx]);
    }
}

int* make_lotto() {
    static int lotto[6];
    srand((unsigned int) time(NULL));
    int i = 0 ;
    while(i<6){
        int temp = rand()%45 +1 ;
        bool flag = false ;
        for(int idx = 0 ; idx<i ; idx++){
            if(temp == *(lotto+idx)){
                flag = true;
                break;
            }
        }
        if(flag){
            continue;
        }else{
            *(lotto+i) = temp;
            i++;
        }
    }
    return lotto;
}

void sort(int* arr, int cnt) {
    for(int i=0 ; i<=cnt-2 ; i++){
        int temp = *(arr+i);
        for(int j=i+1 ; j<=cnt-1 ; j++){
            if(temp>*(arr+j)){
                *(arr+i) = *(arr+j);
                *(arr+j) = temp;
                temp = *(arr+i);
            }
        }
    }
}