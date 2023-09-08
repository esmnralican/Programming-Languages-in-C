//klavyeden girilen n sayısının faktöriyelini hesaplayan c kodu
#include <stdio.h>
int main(){
    int number, fac=1, c;
    printf("enter number");
    scanf("%d",&number);
    c = number;
    while(c !=1){
        
        fac = fac*c;
        c--;
    }
    printf("factoriel : %d " , fac);
    return 0;
}

//OPTION 2
/*
#include <stdio.h>
int main(){
    int number, fac=1, c=1;
    printf("enter number");
    scanf("%d",&number);
       while(c <= number){
        fac = fac*c;
        c++;
    }
    printf("factoriel : %d " , fac);
    return 0;
}
*/