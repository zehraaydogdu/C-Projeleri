#include <stdio.h>
int main(){
	int vize, final;
	printf("Vize ve final notlarini sirasiyla giriniz: ");
	scanf("%d%d", &vize, &final);
	if(vize*(4/10)+final*(6/10)>55){
		printf("Gectiniz");
	}
	else{
		printf("Kaldiniz");
	}
	return 0;
}
