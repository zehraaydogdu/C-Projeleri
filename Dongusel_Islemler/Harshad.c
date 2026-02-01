#include <stdio.h>
int main(){
	int sayi, toplam=0, originalSayi;
	printf("Lutfen kontrolu yapilacak sayiyi girin: ");
	scanf("%d", &sayi);
	originalSayi=sayi;
	while(sayi>0){
		toplam+=sayi%10;
		sayi=sayi/10;
	}
	if(originalSayi%toplam==0){
		printf("Sayimiz bir harshad sayidir");
	}
	else{
		printf("Sayimiz bir harshad sayi degildir");
	}
	return 0;
}
