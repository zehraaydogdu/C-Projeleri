#include <stdio.h>
#include <math.h>

/*int main(){
	int n, karesi;
	printf("Lutfen bir sayi girin: ");
	scanf("%d", &n);
	karesi=n*n;
	printf("\nSayinin karesi: %d", karesi);
	return 0;
} */
int main(){
	int n, karesi;
	printf("Lutfen bir sayi girin: ");
	scanf("%d", &n);
	karesi=pow(n, 2);
	printf("\nSayinin karesi: %d", karesi);
	return 0;
}
