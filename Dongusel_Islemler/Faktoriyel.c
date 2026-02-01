#include <stdio.h>
int main(){
	int sayi, i, faktoriyel=1;
	printf("Lutfen faktoriyeli hesaplanacak sayiyi girin: ");
	scanf("%d", &sayi);
	for(i=1; i<=sayi; i++){
		faktoriyel*=i;
	}
	printf("Girdiginiz sayinin faktoriyeli: %d", faktoriyel);
	return 0;
}
