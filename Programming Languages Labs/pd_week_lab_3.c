//  Klavyeden bir dairenin yarıçap bilgisi ve işlem türü girildiğinde işlem türü 1 ise dairenin çevresini hesaplanıp yazdıran 2 girilirse alanının hesaplayıp yazdıran, bunların dışındaki girişler için “Yanlış giriş” mesajı vererek sonlanan programı C dili ile yazınız.
#include <stdio.h>
int main(){
int r, option;
double area, perimeter;

printf("Enter r value : ");
scanf ("%d",&r);

printf("Choose option : 1 for area of circle, 2 for perimeter :");
scanf("%d", &option);

if(option == 1){
    perimeter= 2 * 3.14 * r;
    printf(" The perimeter of circle is %2.f", perimeter);
}else if(option == 2){
    area = 3.14 * r * r;
    printf(" The area of circle is %2.f", area);
}else{
    printf("WRONG CHOICE WAS MADE");
}
    return 0;
}
