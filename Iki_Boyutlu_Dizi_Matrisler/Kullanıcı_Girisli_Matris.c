#include <stdio.h>
int main(){
	int matris[10][10], n, i, j, sayac=1;
	printf("Matris boyutunu girin: ");
	scanf("%d", &n);
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			matris[i][j]=sayac;
			sayac++;
		}
	}
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%d\t", matris[i][j]);
		}
		printf("\n");
	}
	return 0;
 }
