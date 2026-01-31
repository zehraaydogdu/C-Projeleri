#include <stdio.h>
#include <math.h>
/*int main(){
	int x;
	printf("Bir sayi girin: ");
	scanf("%d", &x);
	if(x<0){
		printf("Sayinin mutlak degeri: %d", -x);
	}
	else{
		printf("Sayinin mutlak degeri: %d", x);
	}
	return 0;
}*/
int main(){
	int x;
	printf("Bir sayi girin: ");
	scanf("%d", &x);
	abs(x);
	printf("Sayinin mutlak degeri: %d", abs(x));
	return 0;
}
