#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int matris[4][4], i, j, enKucuk, enBuyuk;
	float ort;
	srand(time(NULL));
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			matris[i][j]=rand()%100;
		}
	}
	enKucuk=matris[0][0];
	enBuyuk=matris[0][0];
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			printf("%d\t", matris[i][j]);
			if(matris[i][j]<enKucuk){
				enKucuk=matris[i][j];
			}
			if(matris[i][j]>enBuyuk){
				enBuyuk=matris[i][j];
			}
			printf("\n");
		}
	}
	ort=(enBuyuk+enKucuk)/2.0;
	printf("\nMatrisin en buyuk degeri %d", enBuyuk);
	printf("\nMatrisin en kucuk degeri %d", enKucuk);
	printf("\nMatrisin ortalama degeri %.2f", ort);
	return 0;
}
