#include <stdio.h>
int main(){
    int bolunen, bolen;
    int sonuc=0;
    printf("Bolunen sayiyi giriniz: ");
    scanf("%d", &bolunen);
    printf("Bolen sayiyi giriniz: ");
    scanf("%d", &bolen);
    if(bolen==0){
        printf("Hata: Sifira bolme yapilamaz");
        return 0;
    }
    while(bolunen>=bolen){
        bolunen=bolunen-bolen;
        sonuc++;
    }
    printf("Bolme islemi sonucu: %d", sonuc);
    return 0;
}
