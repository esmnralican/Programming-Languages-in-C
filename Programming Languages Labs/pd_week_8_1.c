// Determine Whether a Temperature is Below or Above the Freezing Point.
#include <stdio.h>

int main() {
    int temprature;
    printf("Enter the temprature value : ");
    scanf("%d", &temprature);
    
    if(temprature < 0){
        printf("It's below freezing point");
    }else if(temprature > 0){
        printf("It's above freezing point");
    }else{
        printf("It's freezing point");
    }
    return 0;
}
