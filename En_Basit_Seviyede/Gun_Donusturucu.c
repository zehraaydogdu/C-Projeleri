#include <stdio.h>
int main(){
	int gun, hafta, yil, kalanGun;
	printf("Hesaplanmak istenen gun sayisini giriniz: ");
	scanf("%d", &gun);
	yil=gun/365;
    kalanGun=gun%365;
    hafta=kalanGun/7;
    kalanGun=kalanGun%7;
	printf("Hesaplanan deger: %d yil %d hafta %d gun seklindedir", yil, hafta, kalanGun);
	return 0;
}
