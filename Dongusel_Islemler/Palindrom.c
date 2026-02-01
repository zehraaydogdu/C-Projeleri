#include <stdio.h>
int main(){
    int sayi, orijinalSayi, tersSayi = 0, kalan;
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);
    orijinalSayi = sayi;

    // Sayýyý ters çevirme döngüsü
    while (sayi > 0) {
        kalan = sayi % 10;               
        tersSayi = (tersSayi * 10) + kalan; 
        sayi = sayi / 10;              
    }
    
    if (orijinalSayi == tersSayi) {
        printf("%d bir palindrom sayidir.\n", orijinalSayi);
    } else {
        printf("%d bir palindrom degildir.\n", orijinalSayi);
    }

    return 0;
}
