#include <stdio.h>
int main(){
	int dizi[2][2], i, j;
	printf("2x2 boyutundaki matrisin elemanlarini giriniz:\n");
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("dizi[%d][%d]: ", i, j);
			scanf("%d", &dizi[i][j]);
		}
	}
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("%d ", dizi[i][j]);
		}
	}
	return 0;
}
