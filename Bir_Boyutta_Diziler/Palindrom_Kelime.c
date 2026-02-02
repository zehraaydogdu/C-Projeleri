#include <stdio.h>
#include <string.h>
int main(){
	char kelime[50], tersi[50];
	int i, n;
	printf("Lutfen bir kelime girin: ");
	scanf("%s", kelime);
	n=strlen(kelime);
	for(i=0; i<n; i++){
		tersi[i]=kelime[n-1-i];
	}
	tersi[n]='\0';
	if(strcmp(kelime, tersi)==0){
        printf("Kelimemiz palindromdur");
    }
    else{
        printf("Kelimemiz palindrom degildir");
    }
	return 0;
}
