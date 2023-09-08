//klavyeden girilen 10 not değeri için "1" kaldı ve "2"geçti olarak alınacaktır. Kalan ve gecen oranını hesaplayan c kodu.
#include <stdio.h>
int main(){
    int counter = 5, grade, pass=0, fail=0;
    while(counter > 0){
        printf("enter grade (1 & 2): ");
        scanf("%d",&grade);
        if( grade == 1){
            fail++;
            counter--;
        }
        else if( grade == 2){
            pass ++;
            counter--;
        }else
            printf("\n ERROR");
    }
    printf("pass : %d, fail :%d ", pass, fail);
    return 0;
}