#include <stdio.h>
int main(){
	int a, b, gecici;
	printf("A ve B degerlerini giriniz: ");
	scanf("%d%d", &a, &b);
	gecici=a;
	a=b;
	b=gecici;
	printf("Yeni A ve B degerleri A=%d B=%d", a, b);
	return 0;
}
