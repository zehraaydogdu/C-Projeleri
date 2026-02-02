#include <stdio.h>
int main(){
    int dizi[50], i, x, n;
	int bulundu=0;
    printf("Dizi boyutunu giriniz: ");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        printf("Dizinin %d. elemanini girin: ", i+1);
        scanf("%d", &dizi[i]);
    }
    printf("\nHangi sayi aranacak: ");
    scanf("%d", &x);
    printf("Arama sonucu: ");
    for(i=0; i<n; i++){
    	if(x==dizi[i]){
    		printf("%d. sirada bulundu", i+1);
    		bulundu=1;
		}
	}
	if(!bulundu){
        printf("Aranan sayi dizide mevcut degil.");
    }
    return 0;
}
