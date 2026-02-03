#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int matris[4][4], i, j, temp=0;
	srand(time(NULL));
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			matris[i][j]=rand()%10;
		}
	}
	printf("Ilk durumda matris:\n");
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			printf("%d\t", matris[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			if(i==j){
				temp=matris[i][j];
				matris[i][j]=matris[i][3-i];
				matris[i][3-i]=temp;
				temp=0;
			}
		}
	}
	printf("Son durumda matris:\n");
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			printf("%d\t", matris[i][j]);
		}
		printf("\n");
	}
	return 0;
}
