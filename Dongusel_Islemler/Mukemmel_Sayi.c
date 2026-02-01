#include <stdio.h>
int main(){
	int i, sayi, sonuc=0;
	printf("Lutfen kontrolu yapilacak sayiyi girin: ");
	scanf("%d", &sayi);
	for(i=1; i<sayi; i++){
		if(sayi%i==0){
			sonuc+=i;
		}
	}
	if(sayi==sonuc){
		printf("%d bir mukemmel sayidir", sayi);
	}
	else{
		printf("%d bir mukemmel sayi degildir", sayi);
	}
	return 0;
}
