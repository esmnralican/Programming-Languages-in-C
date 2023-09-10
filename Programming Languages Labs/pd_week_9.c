// Write a C program for computing factorial N (N!)
#include <stdio.h>

int main(){
    int number, counter=1, factorial=1;
    
    printf("Enter number : ");
    scanf("%d",&number);
    
    while(counter <= number){
        factorial= factorial * counter;
        counter++;
    }
    printf("Factorial of %d is %d", number, factorial);

        return 0;
}


