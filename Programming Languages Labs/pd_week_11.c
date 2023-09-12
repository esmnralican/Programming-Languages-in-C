#include <stdio.h>
// Pentagonal sayıları üreten fonksiyon
int pentagonal(int n) {
    return n * (3 * n - 1) / 2;
}

int main() {
    int n = 1;
    int pentagon;

    printf("100'den küçük pentagon sayıları:\n");

    while (1) {
        pentagon = pentagonal(n);
        if (pentagon >= 100)
            break;
        printf("%d ,", pentagon);
        n++;
    }

    printf("\n");

    return 0;
}

