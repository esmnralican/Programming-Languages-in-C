//bir sayının 4 bölümünden kalanı mod kullanmadan bulma
#include <stdio.h>
int main(){
    int number;
    printf("enter number : ");
    scanf("%d",&number);
    while(number >= 4 ){
       number = number - 4;
    }
       printf("number %d", number);   
    
    return 0;
}