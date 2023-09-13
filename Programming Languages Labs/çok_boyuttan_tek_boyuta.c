#include <stdio.h>

void diziDonustur(int M[3][4], int N[12]) {
    int index = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            N[index] = M[i][j];
            index++;
        }
    }
}

int main() {
    int M[3][4] = {
        {18, 24, 36, 41},
        {50, 63, 78, 81},
        {92, 14, 16, 12}
    };

    int N[12]; // 3x4 matrisin elemanlarını tutacak tek boyutlu dizi

    diziDonustur(M, N);

    printf("Tek Boyutlu Dizi: ");
    for (int i = 0; i < 12; i++) {
        printf("%d ", N[i]);
    }
    printf("\n");

    return 0;
}
