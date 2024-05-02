#include <stdio.h>
#include <string.h>

// Karakteri binary forma dönüştürmek için fonksiyon
void binaryDonusturme(char harf) {
    // Char tipi 8 bit uzunluğunda olduğu için
    for (int i = 7; i >= 0; --i) {
        // Bitwise and işlemi uygulanır, böylece 1-1 eşleşirse ekrana 1 yazılır, aksi takdirde 0
        printf("%d", (harf >> i) & 1);
    }
}

void metinBinary(char *text) {
    int boyut = strlen(text);
    printf("Metin: %s\n", text);
    printf("Binary:\n");
    // Her karakter için dönüşüm yapma
    for (int i = 0; i < boyut; ++i) {
        binaryDonusturme(text[i]);
        printf(" ");
    }
    printf("\n");
}

int main() {
    char metin[100];
    printf("Metin giriniz: ");
    scanf("%s", metin);
    metinBinary(metin);
    return 0;
}
