#include <stdio.h>
#define PI 3.14
int main(){
	float r, alan;
	printf("Dairenin yaricapini girin: ");
	scanf("%f", &r);
	alan=PI*r*r;
	printf("Dairenin alani: %.2f", alan);
	return 0;
}
