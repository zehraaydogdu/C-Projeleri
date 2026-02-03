#include <stdio.h>
int main(){
	int notlar[5][4]={{1, 40, 90, 0},
                      {2, 55, 65, 0},
                      {3, 80, 70, 0},
                      {4, 30, 20, 0},
                      {5, 75, 45, 0}};
	int i, j;
	for(i=0; i<5; i++){
	   notlar[i][3]=(notlar[i][1]+notlar[i][2])/2;
	}
	printf("No\tVize\tFinal\tOrt.\n");
	for(i=0; i<5; i++){
	    for(j=0; j<4; j++){
	    	printf("%d\t", notlar[i][j]);
		}
		printf("\n");
	}
	return 0;
}
