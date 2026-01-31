#include <stdio.h>
int main(){
    int sayi, rakam;
    int basamak=1;
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);
    while(sayi>0){
        rakam=sayi%10;
        printf("%d\n", rakam*basamak);
        sayi=sayi/10;
        basamak=basamak*10;
    }
    return 0;
}
