#include <stdio.h>
// Bir sınıftaki 10 öğrencinin boy ve kilo değerlerini iki boyutlu diziye klavyeden okuyarak aktaran ve ortalama boy ve kilo değerlerini hesaplayarak ekrana yazdıran programı C dili ile yazımı.
int main() {
    // Öğrenci sayısı
    int ogrenci_sayisi = 4;

    // Öğrenci bilgilerini saklamak için iki boyutlu dizi
    float ogrenci_bilgileri[ogrenci_sayisi][2]; // İlk sütun boy, ikinci sütun kilo

    // Boy ve kilo değerlerini kullanıcıdan alın
    for (int i = 0; i < ogrenci_sayisi; i++) {
        printf("Öğrenci %d - Boy (cm): ", i + 1);
        scanf("%f", &ogrenci_bilgileri[i][0]);

        printf("Öğrenci %d - Kilo (kg): ", i + 1);
        scanf("%f", &ogrenci_bilgileri[i][1]);
    }

    // Boy ve kilo değerlerinin toplamını hesapla
    float toplam_boy = 0.0;
    float toplam_kilo = 0.0;

    for (int i = 0; i < ogrenci_sayisi; i++) {
        toplam_boy += ogrenci_bilgileri[i][0];
        toplam_kilo += ogrenci_bilgileri[i][1];
    }

    // Ortalama boy ve kilo değerlerini hesapla
    float ortalama_boy = toplam_boy / ogrenci_sayisi;
    float ortalama_kilo = toplam_kilo / ogrenci_sayisi;

    // Sonuçları ekrana yazdır
    printf("Ortalama Boy: %.2f cm\n", ortalama_boy);
    printf("Ortalama Kilo: %.2f kg\n", ortalama_kilo);

    return 0;
}
