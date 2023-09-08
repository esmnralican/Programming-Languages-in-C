//klavyeden -1 giriline kadar girilen öğrencilerin not ortalamasını hesaplayan c kodu
#include <stdio.h>
int main(){
int sum = 0, c = 0, grade;
float avg;

printf("Until press -1, enter grades: ");
scanf("%d", &grade);

while(grade != -1){
    sum += grade; // sum = sum + grade
    c ++;
    printf("Enter grade :");
    scanf("%d", & grade);
}
if (c != 0){
    avg = sum / c;
    printf("avarege is : %f", avg);
}
else
    printf("ERROR");

return 0;


}
