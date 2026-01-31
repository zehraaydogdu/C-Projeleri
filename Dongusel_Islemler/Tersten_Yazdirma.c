#include <stdio.h>
int main(){
	int sayi, ters=0;
	printf("Lutfen bir sayi girin: ");
	scanf("%d", &sayi);
	while(sayi>0){
		ters = ters * 10 + (sayi % 10);
        sayi = sayi / 10;
    }
    printf("Sayinin tersi: %d", ters);
    return 0;
}
