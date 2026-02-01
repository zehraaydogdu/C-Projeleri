#include <stdio.h>
int main(){
	int i, n, sayi, neg=0, poz=0, sifir=0;
	printf("Kac tane sayi gireceksiniz: ");
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		printf("%d. sayiyi giriniz: ", i);
		scanf("%d", &sayi);
		if(sayi<0){
			neg++;
		}
		else if(sayi>0){
			poz++;
		}
		else{
			sifir++;
		}
	}
	printf("Pozitif: %d, Negatif: %d, Sifir: %d adettir.", poz, neg, sifir);
	return 0;
}
