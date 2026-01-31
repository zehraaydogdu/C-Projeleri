#include <stdio.h>
int main(){
	int sayi, toplam;
    printf("1. sayiyi giriniz: ");
    scanf("%d", &sayi);
    toplam = sayi;

    printf("2. sayiyi giriniz: ");
    scanf("%d", &sayi);
    toplam = toplam + sayi;

    printf("3. sayiyi giriniz: ");
    scanf("%d", &sayi);
    toplam = toplam + sayi;

    printf("Toplam: %d", toplam);
    return 0;
}
