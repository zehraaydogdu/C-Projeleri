#include <stdio.h>
#include <string.h>
int main(){
	char dizi[100];
	int sayac=0, i;
	printf("Lutfen bir cumle giriniz: ");
	fgets(dizi, sizeof(dizi), stdin);
	for(i=0; i<strlen(dizi); i++){
		if(dizi[i]==' '){
			sayac++;
		}
	}
	printf("Toplam kelime sayisi: %d", sayac+1);
	return 0;
}
