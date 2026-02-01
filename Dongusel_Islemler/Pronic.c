#include <stdio.h>
int main() {
    int sayi, i, bulundu = 0;
    printf("Kontrolu yapilacak sayiyi giriniz: ");
    scanf("%d", &sayi);
    // i * (i + 1) iþlemini kontrol ediyoruz
    for(i=0; i*(i+1)<=sayi; i++){
        if(i*(i+1)==sayi){
            printf("Sayimiz pronic bir sayidir: %d x %d = %d\n", i, i + 1, sayi);
            bulundu = 1; // Þahidimizi "bulundu" olarak güncelliyoruz
            break;       // Bulduðumuz için aramayý býrakýyoruz
        }
    }
    // Döngü bittiðinde þahide soruyoruz
    if (bulundu == 0) {
        printf("Sayimiz pronic bir sayi degildir.\n");
    }
    return 0;
}
