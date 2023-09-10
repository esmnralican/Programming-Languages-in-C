//Convert Temperature from Fahrenheit (℉) to Celsius (℃).
#include <stdio.h>

int main(){
    double fahrenheit, celcius;
    
    printf("Enter fahrenheit : ");
    scanf("%lf",&fahrenheit);
    
    celcius = (fahrenheit - 32) * 5.0 / 9.0;
    
    printf("%.2lf℉ is %.2lf℃", fahrenheit,celcius);
    return 0;
}


