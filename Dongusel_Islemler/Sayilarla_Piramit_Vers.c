#include <stdio.h>
int main(){
	int i, j, n, sayi=1;
	printf("Kaca kaclik bir yarim piramit istiyorsunuz: ");
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		for(j=1; j<=i; j++){
			printf("%d ", sayi);
			sayi++;
		}
		printf("\n");
	}
	return 0;
}
