#include <stdio.h>
int main(){
	char dizi[50], ch; 
	int i, n, sayac=0;
	printf("Karakter dizisinin boyutunu giriniz: ");
	scanf("%d", &n);
	printf("Bulmayi istediginiz harf nedir: ");
	scanf(" %c", &ch);
	for(i=0; i<n; i++){
		printf("%d. karakteri atayiniz: ", i+1);
		scanf(" %c", &dizi[i]);
		if(ch==dizi[i]){
			sayac++;
		}
	}
	printf("Aranan harften toplamda %d tane vardir", sayac);
	return 0;
}
