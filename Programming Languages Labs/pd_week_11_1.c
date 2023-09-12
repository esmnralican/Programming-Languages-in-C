// Klavyden girilen matrisleri toplayan c kodu
int main() {
    int row, col;

    printf("Matris boyutunu girin (satır sütun): ");
    scanf("%d %d", &row, &col);

    // İlk matrisi girin
    printf("İlk matrisi girin:\n");
    int matris1[row][col];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matris1[i][j]);
        }
    }

    // İkinci matrisi girin
    printf("İkinci matrisi girin:\n");
    int matris2[row][col];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matris2[i][j]);
        }
    }

    // Matrisleri topla ve sonucu yazdır
    printf("Matrislerin toplamı:\n");
    int toplamMatris[row][col];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            toplamMatris[i][j] = matris1[i][j] + matris2[i][j];
            printf("%d ", toplamMatris[i][j]);
        }
        printf("\n");
    }

    return 0;
}
