#include <stdio.h>

// ATM hesap yapýsý
struct ATMHesap {
    float bakiye;
};

// ATM fonksiyonlarý
void menuGoster() {
    printf("\nATM Menusu:\n");
    printf("1. Bakiye Sorgula\n");
    printf("2. Para Yatir\n");
    printf("E. Cikis\n");
    printf("Seciminizi yapiniz: ");
}

void bakiyeSorgula(struct ATMHesap hesap) {
    printf("\nBakiye: %.2f TL\n", hesap.bakiye);
}

void paraYatir(struct ATMHesap *hesap) {
    float miktar;
    printf("\nYatirilacak miktari girin: ");
    scanf("%f", &miktar);

    hesap->bakiye += miktar;
    printf("Para yatirma islemi basarili.\n");
}

int main() {
    struct ATMHesap hesap;
    hesap.bakiye = 1000.0; 

    char secim;
    do {
        menuGoster();
        scanf(" %c", &secim); 

        switch (secim) {
            case '1':
                bakiyeSorgula(hesap);
                break;
            case '2':
                paraYatir(&hesap);
                break;
            case 'E':
            case 'e':
            case 'q':
            case 'Q':
                printf("ATM'den cikiliyor...\n");
                break;
            default:
                printf("Gecersiz secim. Lutfen tekrar deneyin.\n");
        }
    } while (secim != 'E' && secim != 'e' && secim != 'q' && secim != 'Q');

    return 0;
}
