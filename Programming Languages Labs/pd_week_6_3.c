
// 3 basamaklı tüm amstrong sayıları
#include <stdio.h>
int main(){
    int  units, ten, hundreds, temp, c = 100;
    while(c <= 999){
         temp = c;
         hundreds = temp / 100;
         temp = temp % 100;
         ten = temp / 10; 
         units = temp % 10;
        // printf("%d , %d ,%d", hundreds, ten, units);
    
            if(hundreds*hundreds*hundreds + ten*ten*ten + units*units*units == c){
                printf("%d \n ",c);
                c++;
           }else
                c++;
    }
    return 0;
}





// 3 basamaklıgirilen sayı  amstrong saylılarını bulma
#include <stdio.h>
int main(){
    int number, units, ten, hundreds, temp;
    printf("enter number :");
    scanf("%d",&number);
    
    
        temp = number;
        hundreds = temp / 100;
        temp = temp % 100;
        ten = temp / 10; 
        units = temp % 10;
    
    if(hundreds*hundreds*hundreds + ten*ten*ten + units*units*units == number){
        printf("%d amstrong sayısıdır", number);
    }else
    printf("%d amstrong sayısı değildir", number);
    // printf("%d , %d ,%d", hundreds, ten, units);
    

    return 0;
}
