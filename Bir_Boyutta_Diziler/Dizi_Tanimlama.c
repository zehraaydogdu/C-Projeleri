#include <stdio.h>
int main(){
	int dizi[50], n=10, i;
	printf("0-10 arasi sayilar: ");
	for(i=0; i<=n; i++){
		dizi[i]=i;
		printf("%d ", dizi[i]);
	}
	return 0;
}
