#include <stdio.h>
int main(){
	int sayi, toplam=0, basamak=1, originalSayi, rakam;
	printf("Lutfen binary sistemden onluga gecirmek icin sayi girin: ");
	scanf("%d", &sayi);
	originalSayi=sayi;
	while(sayi>0){
		rakam=sayi%10;
		toplam=toplam+(rakam*basamak);
        basamak=basamak*2;
        sayi=sayi/10;
	}
	printf("Binary: %d -> Decimal: %d\n", originalSayi, toplam);
    return 0;
}
