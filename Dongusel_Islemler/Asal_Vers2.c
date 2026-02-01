#include <stdio.h>
int main(){
    int n, sayi = 2, i, asalMi, adet = 0;
    printf("Kac adet asal sayi listelemek istersiniz: ");
    scanf("%d", &n);
    printf("Ilk %d asal sayi: ", n);
    while (adet < n) {
        asalMi = 1;
        for (i = 2; i <= sayi/2; i++) {
            if (sayi % i == 0) {
                asalMi = 0;
                break;
            }
        }
        if (asalMi == 1) {
            printf("%d ", sayi);
            adet++;
        }
        sayi++;
    }
    printf("\n");
    return 0;
}
