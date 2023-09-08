//klavyeden girilen n sayının ortalamasını hesaplayan c kodu
#include <stdio.h>
int main(){
    int number, c=1, sum=0, n; 
    float avg;
    printf("Enter count of number :");
    scanf("%d", &n);
    while( c <= n ){
        printf("enter number: ");
        scanf("%d", &number);
        sum = sum + number;
        c++;
    }
    avg = sum / n ;
    printf("avarage = %f",avg);
return 0;
}
