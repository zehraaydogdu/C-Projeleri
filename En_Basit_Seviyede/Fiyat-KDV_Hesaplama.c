#include <stdio.h>
int main(){
	float fiyat, KDV, yenifiyat;
	printf("Lutfen urun fiyati ve KDV degerini girin: ");
	scanf("%f%f", &fiyat, &KDV);
	yenifiyat=fiyat+fiyat*KDV/100;
	printf("Yeni fiyat: %.2f", yenifiyat);
	return 0;
}
