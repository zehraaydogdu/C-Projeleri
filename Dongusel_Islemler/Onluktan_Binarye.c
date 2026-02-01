#include <stdio.h>
int main(){
	int sayi, i=0, binary[32], j;
	printf("Lutfen donusumu yapilacak sayiyi girin: ");
	scanf("%d", &sayi);
	if(sayi==0){
        printf("Binary: 0\n");
        return 0;
    }
	while(sayi>0){
		binary[i] = sayi % 2; // Kalaný (0 veya 1) dizinin i. kutusuna koy
        sayi = sayi / 2;      // Sayýyý 2'ye bölerek küçült (Döngüyü bitirecek olan hamle)
        i++;
	}
	printf("Binary karsiligi: ");
    for(j=i-1; j>=0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
    return 0;
}
