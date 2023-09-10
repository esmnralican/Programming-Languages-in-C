// Write a C program which generates even numbers between 1000 and 2000 and then prints them
#include <stdio.h>
int main() {
    int even;
    for( even=1000; even<=2000; even++){
        if(even % 2 == 0){
            if(even <= 2000){
                printf("%d \n ", even);
            }
        }
    }
    return 0;
}
