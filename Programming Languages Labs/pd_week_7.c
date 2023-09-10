//  Klavyeden girilen iki sayının toplamını hesaplayıp ekrana yazdıran programı C dili ile yazınız.
#include <stdio.h>
int main(){
int a, b, sum;
printf("Enter number 1 : ");
scanf("%d", &a);

printf("Enter number 2 : ");
scanf("%d", &b);

sum = a + b;
printf("Sum of 2 numbers are = %d ", sum);

    return 0;
}
