#include <stdio.h>

int main(void) {
    int floor;
    printf("floor? >>");
    scanf("%d",&floor);
    int last = (floor*2)-1;
    for(int i=1 ; i<=floor ; i++){
        for(int j=1 ; j<=floor-i; j++ ){
            printf(" ");
        }
        for(int k=1 ; k<=2*i-1 ; k++){
            printf("*");
        }
        printf("\n");
    }
}