#include <stdio.h>
#include <stdlib.h>
int main() {
    long long sayi;
    int suAnkiRakam, oncekiRakam;
    int jumbledMi = 1; 
    printf("Kontrol edilecek sayiyi girin: ");
    scanf("%lld", &sayi);
    if(sayi < 0) sayi = -sayi;
    if(sayi < 10) {
        printf("Bu sayi Jumbled bir sayidir.\n");
        return 0;
    }
    oncekiRakam = sayi % 10;
    sayi /= 10;
    while(sayi > 0) {
        suAnkiRakam = sayi % 10; 
        if(abs(suAnkiRakam - oncekiRakam) > 1) {
            jumbledMi = 0; 
            break;
        }
        oncekiRakam = suAnkiRakam;
        sayi /= 10;
    }
    if(jumbledMi == 1) {
        printf("Bu sayi Jumbled bir sayidir.\n");
    } 
	else{
        printf("Bu sayi Jumbled bir sayi DEGILDIR.\n");
    }
    return 0;
}
