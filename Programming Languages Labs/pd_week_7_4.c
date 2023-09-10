// - Klavyeden girilen bir para miktarını en az banknot kullanarak oluşturmak istediğimizde içinde kaç tane 100, 50, 20 ve 10’luk olduğunu bulan programı C dili ile yazınız. Not: Klavyeden girilen para miktarı 10’un katları olmalıdır.
#include <stdio.h>
int main(){
    int money, hundred, fifty, twenty, ten, banknotes;
    printf("Enter the amount of money that you want from atm :");
    scanf("%d", &money);
    
  if ( money % 10 == 0){
    hundred = money / 100; // for 100 treasury note 
    money = money % 100;
    
    fifty = money / 50 ; // for 50 treasury note 
    money = money % 50;
    
    twenty = money / 20 ; // for 20 treasury note 
    money = money % 20 ; 
    
    ten = ten / 10 ; // for 10 treasury note 
    
    banknotes = hundred + fifty + twenty + ten;
    
    printf(" The amount of banknotes are %d", banknotes);
  }else{
      printf("Please enter an amount in multiples of 10");
  } 
    return 0;
}
