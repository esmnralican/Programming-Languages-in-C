// Klavyeden -1 girilene kadar girilen sayıları diziye aktaran, ardından her elemanın karesini ekrana basan programı yazınız. (Dizi eleman sayısı max 10 olacaktır.)
#include <stdio.h>
#define SIZE 9  // eleman sayısı kısıtlandı.

int main() {
    int A[SIZE];
    int number;
    int i=0;
    
    printf("Until press -1, enter number: ");
    scanf("%d", &number);


    while(number != -1 && i < SIZE){
            printf("Enter %d number : ", i+1);
            scanf("%d",&number);
            A[i]=number;
            i++;
    
    }
    
   
    
    for (int i=0; i<10; i++){
            printf("%d \n", A[i]);
        }
        
    printf("\n");    
        
    printf("Squared numbers:\n");
    for (int j = 0; j < i; j++) {
        printf("%d squared is %d\n", A[j], A[j] * A[j]);
    }
   

    return 0;
}
