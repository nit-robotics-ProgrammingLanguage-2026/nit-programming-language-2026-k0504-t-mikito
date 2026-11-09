#include <stdio.h>
int main(void){
    int num;
    scanf("%d",&num);
    if (num >= 0 && !(num >= 10 &&num < 12) && num < 15) {
        printf("OK");
        
    }else{
        printf("NG");
    }
    return 0;
}
