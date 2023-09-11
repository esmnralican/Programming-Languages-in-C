//  Write a C program to display the sum of the series [ 1+x+x^2/2!+x^3/3!+....]
#include <stdio.h>
#include <math.h>

int main() {
    double x, sum = 1.0, term = 1.0;
    int i, n;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i < n; i++) {
        term *= x / i; // Calculate the next term
        sum += term;   // Add the term to the sum
    }

    printf("Sum of the series for x = %.2lf is %.6lf\n", x, sum);

    return 0;
}

