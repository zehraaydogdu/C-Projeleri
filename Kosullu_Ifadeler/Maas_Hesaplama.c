#include <stdio.h>
int main(){
	int sabitMaas, cocukSayisi;
	printf("Sabit maas miktarini ve personelin cocuk sayisini giriniz: ");
	scanf("%d%d", &sabitMaas, &cocukSayisi);
	if(cocukSayisi==1){
        sabitMaas=sabitMaas+sabitMaas*5/100;
    }
    else if(cocukSayisi==2){
        sabitMaas=sabitMaas+sabitMaas*10/100;
    }
    else if(cocukSayisi>2){
        sabitMaas=sabitMaas+sabitMaas*15/100;
    }
    printf("Son maas %ddir", sabitMaas);
    return 0;
}
