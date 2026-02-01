#include <stdio.h>
int main(){
	int i, j, n;
	printf("Kaca kaclik bir kare istiyorsunuz: ");
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
