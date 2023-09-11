// Write a C program to check whether a given number from keyboard is Palindrome number or not(523325 is a polindrom)
#include <stdio.h>

int main() {
   int number, temp, reversed=0, remainder;
   
   printf("Enter number : ");
   scanf("%d",&number);
   
   temp = number;
   while(number != 0 ){
       remainder = number % 10;
       reversed = reversed * 10 + remainder;
       number = number / 10;
   }

    if (reversed == temp) {
        printf("%d is a palindrome.\n", temp);
    } else {
        printf("%d is not a palindrome.\n", temp);
    }

    return 0;
}
