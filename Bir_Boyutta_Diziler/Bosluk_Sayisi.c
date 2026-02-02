#include <stdio.h>
#include <string.h>
int main(){
	char dizi[100]; 
	int i, sayac=0;
	printf("Bir cumle giriniz: ");
	fgets(dizi, sizeof(dizi), stdin);
	for(i=0; i<strlen(dizi); i++){
		if(dizi[i]==' '){
			sayac++;
		}
	}
	printf("Toplam bosluk sayisi: %d", sayac);
	return 0;
}
