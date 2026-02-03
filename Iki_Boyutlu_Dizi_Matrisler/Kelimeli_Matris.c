#include <stdio.h>
#include <string.h>
int main(){
	char cumle[100], matris[10][20];
	int i, satir=0, sutun=0;
	printf("Lutfen kelimeleri arada bosluk olacak bicimde girin: ");
	fgets(cumle, sizeof(cumle), stdin);
	for(i=0; i<strlen(cumle); i++){
		if(cumle[i]==' ' || cumle[i]=='\n'){
            if(sutun>0){
                matris[satir][sutun]='\0'; 
                satir++; 
                sutun=0;
            }
        }
        else{
            matris[satir][sutun]=cumle[i];
            sutun++;
        }
	}
	printf("\nMatris Yapisi:\n");
    for(i=0; i<=satir; i++){
        if(strlen(matris[i])>0){
            printf("%s\n", matris[i]);
        }
    }
	return 0;
}
