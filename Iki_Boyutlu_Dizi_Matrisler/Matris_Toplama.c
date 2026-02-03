#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int matris1[3][2], matris2[3][2], matris[3][2], i, j;
	srand(time(NULL));
	for(i=0; i<3; i++){
		for(j=0; j<2; j++){
			matris1[i][j]=rand()%21+10;
			matris2[i][j]=rand()%21+10;
			matris[i][j]=matris1[i][j]+matris2[i][j];
		}
	}
	printf("Matris 1:\n");
    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
            printf("%d\t", matris1[i][j]);
        }
        printf("\n");
    }
    printf("\nMatris 2:\n");
    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
            printf("%d\t", matris2[i][j]);
        }
        printf("\n");
    }
    printf("\nToplam Matrisi (M1 + M2):\n");
    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
            printf("%d\t", matris[i][j]);
        }
        printf("\n");
    }
	return 0;
}
