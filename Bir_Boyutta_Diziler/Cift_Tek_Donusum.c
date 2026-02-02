#include <stdio.h>
int main(){
	int sayilar[]={20,60,45,42,23,24,26,125,66,55,145,50,30,40};
	int elemanSayisi=sizeof(sayilar)/sizeof(sayilar[0]);
	int i;
	for(i=0; i<sizeof(sayilar); i++){
		if(sayilar[i]%2==0){
			sayilar[i]++;
		}
	}
	for(i=0; i<elemanSayisi; i++){
		printf("%d ", sayilar[i]);
		}
	return 0;	
}
