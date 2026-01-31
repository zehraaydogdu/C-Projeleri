#include <stdio.h>
int main(){
	int a, b, c, enKucuk;
	printf("3 sayi girin: ");
	scanf("%d%d%d", &a, &b, &c);
	if(a<=b && a<=c){
		printf("%d en kucuk sayidir.", a);
	}
	else if(b<=c && b<=a){
		printf("%d en kucuk sayidir.", b);
	}
	else{
		printf("%d en kucuk sayidir.", c);
	}
	return 0;
}
