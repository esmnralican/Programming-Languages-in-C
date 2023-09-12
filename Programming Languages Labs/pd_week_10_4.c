// 10 elemanlı diziyi klavyeden alan ve tersten ekrana yazan programı yazınız
#include <stdio.h>

int main()
{
    int M[10];
  
    printf("eleman gir\n");
    for(int i=0; i<10; i++){
        printf("Enter M[%d]: ",i);
        scanf("%d",&M[i]);
    }
    
    printf("\n \n \n");
    
    // Normal Array
    for(int i=0; i<10; i++){
        printf("%d, ",M[i]);
    }
    
    printf("\n \n \n");

    // Reversed Array
    for(int i=9; i>=0; i--){
        printf("%d, ",M[i]);
    }
    return 0;
}
