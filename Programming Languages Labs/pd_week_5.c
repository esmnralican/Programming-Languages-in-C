//25'e kadar olan tek sayıları ekrana yazdıran c kodu
#include <stdio.h>
int main(){
    int odd_number, counter = 1;
    while(counter <= 25){
        if(counter %2 != 0){
            printf("%d ", counter);
            // sondaki "," karakterini silmek için tekrar if oluşturuldu.
            if (counter <25){
            printf(",");
        }
        }
        counter++;
        
    }
    

return 0;


}
