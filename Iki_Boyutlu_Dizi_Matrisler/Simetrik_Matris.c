#include <stdio.h>
int main(){
	int matris[3][3], i, j, simetrikMi=1;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("matris[%d][%d] elemanini girin: ", i, j);
			scanf("%d", &matris[i][j]);
		}
	}
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%d\t", matris[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			if(matris[i][j]!=matris[j][i]){
				simetrikMi=0;
			}
		}
	}
	if(simetrikMi==1){
		printf("Matriks simetriktir");
	}
	else{
		printf("Matriks simetrik degildir");
	}
	return 0;
}
