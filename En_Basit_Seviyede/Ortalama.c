#include <stdio.h>
int main(){
	int a, b, c;
	float ort;
	printf("3 sayi giriniz: ");
	scanf("%d%d%d", &a, &b, &c);
	ort=(a+b+c)/3;
	printf("Girilen sayilarin ortalamasi: %.2f", ort);
	return 0;
}
