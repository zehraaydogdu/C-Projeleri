#include <stdio.h>
int main(){
	int x;
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d", &x);
	if(x%6==0){
		printf("Sayi altinin katidir.");
	}
	else{
		printf("Sayi altinin kati degildir.");
	}
	return 0;
}
