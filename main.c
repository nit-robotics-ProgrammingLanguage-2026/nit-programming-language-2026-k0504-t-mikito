#include <stdio.h>
int main(void){
    int num;
    scanf("%d",&num);
    /*コメント1：入力された数値が「0以上15未満」の範囲にあり、かつ10,11ではないときにOKが出力される*/
    if (num >= 0 && !(num >= 10 && num < 12) && num < 15) {
        /*コメント2：条件を満たしていれば「OK」と表示する*/
        printf("OK");
        
    }else{
        printf("NG");
    }
    return 0;
}
