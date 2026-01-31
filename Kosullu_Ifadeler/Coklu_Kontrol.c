#include <stdio.h>
int main(){
	int x;
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d", &x);
	if(x%2==0){
		if(x%6==0){
			printf("Sayi cifttir ve 6ya tam bolunur.");
		}
		else{
			printf("Sayi cifttir ama 6ya bolunmez");
		}
	}
	else{
		if(x%3==0){
			printf("Sayi tektir ve 3e tam bolunur");
		}
		else{
			printf("Sayi tektir ama 3e tam bolunmez");
		}
	}
	return 0;
}
