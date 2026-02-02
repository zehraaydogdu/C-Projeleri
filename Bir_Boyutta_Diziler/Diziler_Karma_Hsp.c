#include <stdio.h>
int main(){
	int sinif[50], toplam=0, enBuyuk, enKucuk, i;
	float ort;
	for(i=0; i<10; i++){
		printf("%d. ogrencinin notu: ", i+1);
		scanf("%d", &sinif[i]);
		toplam+=sinif[i];
	}
	enBuyuk=sinif[0];
	enKucuk=sinif[0];
	for(i=0; i<10; i++){
		if(sinif[i]>enBuyuk){
			enBuyuk=sinif[i];
		}
		if(sinif[i]<enKucuk){
			enKucuk=sinif[i];
		}
	}
	ort=toplam/10;
	printf("En yuksek not: %d En dusuk not: %d\n", enBuyuk, enKucuk);
	printf("Sinif not ortalamasi: %.2f", ort);
	return 0;
}
