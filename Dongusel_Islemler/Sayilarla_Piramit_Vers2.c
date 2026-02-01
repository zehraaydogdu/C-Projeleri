#include <stdio.h>
int main(){
	int i, j, n;
	printf("Kaca kaclik bir yarim piramit istiyorsunuz: ");
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		for(j=1; j<=i; j++){
			if(i==j){
				printf("1 ");
			}
			else if((i-j)%2==0){
				printf("1 ");
			}
			else{
				printf("0 ");
			}
		}
		printf("\n");
	}
	return 0;
}
