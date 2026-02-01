#include <stdio.h>
int main(){
	int n, sayi, toplam=0, i;
	printf("Hangi sayiya kadar olan mukemmel sayilari istiyorsunuz: ");
	scanf("%d", &n);
	for(sayi=1; sayi<=n; sayi++) {
        toplam=0;
        for(i=1; i<=sayi/2; i++) {
            if(sayi%i==0) {
                toplam=toplam+i;
            }
        }
        if(toplam==sayi) {
            printf("%d ", sayi);
        }
    }
    printf("\n");
    return 0;
}
