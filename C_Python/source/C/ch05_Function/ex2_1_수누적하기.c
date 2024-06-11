#include <stdio.h>

int main(void) {
    int from = 1,to = 100;
    int tot = 0 ;
    for(int i=from ; i<=to ; i++){
        tot+=i;
    }
    printf("%d 부터 %d 까지 누적합은 %d입니다\n",from,to,tot);

    from = 10 ; to = 100;

    for(int i=from ; i<=to ; i++){
        tot+=i;
    }
    printf("%d 부터 %d 까지 누적합은 %d입니다\n",from,to,tot);
    
}