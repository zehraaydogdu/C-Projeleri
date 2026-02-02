#include <stdio.h>
#include <string.h>
int main(){
	int dizi1[50], dizi2[50], n, i;
	printf("Lutfen dizi boyutunu girin: ");
	scanf("%d", &n);
	for(i=0; i<n; i++){
		printf("Dizi1 in %d. elemanini girin: ", i+1);
		scanf("%d", &dizi1[i]);
	}
	printf("Dizi2 nin elemanlari: ");
	for(i=0; i<n; i++){
		dizi2[i]=dizi1[i];
		printf("%d ", dizi2[i]);
	}
	return 0;
}
