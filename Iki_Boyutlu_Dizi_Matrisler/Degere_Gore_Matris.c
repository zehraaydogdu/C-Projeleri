#include <stdio.h>
int main(){
	int matris[10][10], i, j, n, sayac=0;
	printf("Matris boyutunu giriniz: ");
	scanf("%d", &n);
	for(j=0; j<n; j++){
        if(j%2==0){
            for(i=0; i<n; i++){
                matris[i][j]=sayac++;
            }
        }
        else{
            for(i=n-1; i>=0; i--){
                matris[i][j]=sayac++;
            }
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
