#include <stdio.h>
int main(){
	int fiyat;
	printf("Alinacak urunun fiyatini giriniz: ");
	scanf("%d", &fiyat);
	if(fiyat<100){
		fiyat+=20;
		printf("Son fiyat %ddir", fiyat);
	}
	else{
		printf("Son fiyat %ddir", fiyat);
	}
}
