#include <stdio.h>
int main(){
    int dizi[50], i, n, enBuyuk, enKucuk;
    printf("Kac tane eleman gireceksiniz: ");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        printf("Dizinin %d. elemanini girin: ", i+1);
        scanf("%d", &dizi[i]);
    }
    enBuyuk = dizi[0];
    enKucuk = dizi[0];
    for(i=1; i<n; i++){
    	if(dizi[i]>enBuyuk){
            enBuyuk = dizi[i];
        }
        if(dizi[i]<enKucuk){
            enKucuk = dizi[i];
        }
    }
    printf("Dizinin en buyuk elemani: %d", enBuyuk);
    printf("\nDizinin en kucuk elemani: %d", enKucuk);
    return 0;
}
