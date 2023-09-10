// Klavyeden bir öğrenci için öğrenci no, vize ve final girildiğinde, öğrencinin vize notunun %40’ı ve final notunun %60’ı alarak geçme notunu hesaplayan ve öğrencinin numarası ile birlikte ekrana sonucu yazdıran programı C dili ile yazınız.
#include <stdio.h>

int main() {
int student_no, midterm, final;
double pass ;

printf("Enter student number, midterm score, final score : ");
scanf("%d %d %d", &student_no, &midterm, &final );

pass = midterm* 0.4 + final* 0.6;
printf(" The grade of student number %d is %f", student_no, pass);
    return 0;
}
