// 8 elemanlı float diziye klavyeden değer girin. Girilen değerlerin ortalamasını hesaplayıp ekrana yazdırın.
#include <stdio.h>

int main() {
    float M[8], sum=0.0, avg=0.0;
    printf("Enter 8 float values : \n");
    for(int i=0; i<8; i++){
        scanf("%f",&M[i]);
    }
   for (int i=0; i<8; i++){
       sum += M[i];
   }
   printf("Sum: %2.f \n", sum);
   avg = sum/ 8;
   printf("Avarage of M[8] : %f", sum );
    
    
    return 0;
}
