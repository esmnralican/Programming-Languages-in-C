// Maksimum 5 basamaklı sayının basamaklarındaki rakamları diziye atan ve ekrana basan programı yazınız.
#include <stdio.h>

int main() {
int M[1];    
int number, digit_number=1, digit;
printf("Enter number :");
scanf("%d",&number);

if ( -100000 < number && number < 100000){

if ( -100000 < number < 100000){
    if(number < 0){   
        number = - number;  // if number is negative 
    }  
    
    
    while(digit_number <= 5){
        digit = number % 10; //first digit
        M[digit_number] = digit;
        digit_number++;
        number /= 10; // access for every digits
    }
    
  
    
    
    printf("Digits: ");
    for (int i = digit_number - 1; i >= 0; i--) {
        printf("%d ", M[i]);
    }
    printf("\n");

}else{
    printf("ERROR, TRY AGAIN ");
}

    return 0;
}
}
