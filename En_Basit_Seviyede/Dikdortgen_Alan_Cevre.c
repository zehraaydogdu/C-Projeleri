#include <stdio.h>
int main(){
	int a, b, alan, cevre;
	printf("Dikdortgenin once uzun sonra kisa kenarini girin: ");
	scanf("%d%d", &a, &b);
	alan=a*b;
	cevre=2*(a+b);
	printf("Alan: %d Cevre: %d", alan, cevre);
	return 0;
}
