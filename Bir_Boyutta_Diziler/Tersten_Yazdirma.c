#include <stdio.h>
int main(){
	int n, i, dizi[50];
	printf("Lutfen dizi boyutunu girin: ");
	scanf("%d", &n);
	for(i=0; i<n; i++){
		printf("Dizinin %d. elemanini girin: ", i+1);
		scanf("%d", &dizi[i]);
	}
	printf("Dizinin elemanlari tersten: ");
	for(i=n-1; i>=0; i--){
		printf("%d ", dizi[i]);
	}
	return 0;
}
