#include <stdio.h>

int main(void) {
    int start = 2,end = 7;
    for(int i = 1 ; i<10 ; i++){
        for(int j=start ; j<=end ; j++){
            printf("%d x %d = %d ",j,i,j*i);
        }
        printf("\n");

    }
}