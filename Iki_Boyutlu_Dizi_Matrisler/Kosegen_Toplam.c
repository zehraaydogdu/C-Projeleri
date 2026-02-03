#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int matris[4][4], i, j, toplam1=0, toplam2=0;
	srand(time(NULL));
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			matris[i][j]=rand()%10;
		}
	}
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			printf("%d\t", matris[i][j]);
		} printf("\n");
	} 
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			if(i==j){
				toplam1+=matris[i][j];
			}
			if(i+j==3){ 
                toplam2+=matris[i][j];
            }
	    } 
	}
	printf("\n1. kosegen toplami: %d", toplam1);
    printf("\n2. kosegen toplami: %d\n", toplam2);
	return 0;
}
