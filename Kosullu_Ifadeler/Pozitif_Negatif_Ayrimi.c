#include <stdio.h>
int main(){
	int a;
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d", &a);
	if(a>0){
		printf("Sayi pozitiftir.");
	}
	else if(a<0){
		printf("Sayi negatiftir.");
	}
	else{
		printf("Sayi ne pozitif ne de negatiftir.");
	}
	return 0;
}
