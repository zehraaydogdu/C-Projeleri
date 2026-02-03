#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int matris[3][3], i, j, sayac=0;
	srand(time(NULL));
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			matris[i][j]=rand()%100;
			printf("%d\t", matris[i][j]);
			if(matris[i][j]>50){
				sayac++;
			}
		}
	}
	printf("50den buyuk %d tane sayi var", sayac);
	return 0;
}
