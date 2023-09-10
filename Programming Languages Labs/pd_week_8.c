// Determine and Output Whether Number N is Even or Odd.
#include <stdio.h>

int main() {
    int number, even, odd;
    printf("Enter number: ");
    scanf("%d",&number);
    
    if (number % 2 == 0){
        printf(" %d is even", number);
    }else{
        printf("%d is odd ", number);
    }
    return 0;
}
