#include <stdio.h>

int linearArama(int dizi[], int n, int sayi) {
    int i;
    for (i = 0; i < n; i++) {
        if (dizi[i] == sayi) {
            return i;  
        }
    }
    return -1;  
}

int main() {
    int boyut, sayi, i;

    printf("Dizinin boyutunu girin: ");
    scanf("%d", &boyut);

    int dizi1[boyut];

    printf("Dizinin elemanlarini girin:\n");
    for (i = 0; i < boyut; i++) {
        printf("dizi1[%d]: ", i);
        scanf("%d", &dizi1[i]);
    }

    printf("Aranacak elemani girin: ");
    scanf("%d", &sayi);

    int arama = linearArama(dizi1, boyut, sayi);

    if (arama == -1) {
        printf("Eleman bulunamadý.\n");
    } else {
        printf("Eleman dizinin %d indisinde bulundu\n", arama);
    }

    return 0;
}

