#include <stdio.h>
#include <string.h>
int main(){
	char karakter[5][5]={{'a', 'b', 'd', 'k', 'c'},
	                     {'b', 'a', 'b', 'a', 'd'},
	                     {'c', 'b', 'e', 'i', 'a'},
                         {'x', 'y', 'z', 'a', 't'},
	                     {'b', 'x', 'z', 'k', 'y'}}, kelime[5];
	int i, j, k, bulundu=0, eslesme;
	do{
        printf("Aranmasini istediginiz kelimeyi giriniz: ");
        scanf("%s", kelime);
        if(strlen(kelime)>5 || strlen(kelime)<1){
            printf("Hatali kelime girisi yaptiniz lutfen tekrar deneyin\n");
        }
    }while(strlen(kelime)>5 || strlen(kelime)<1);
    // 1. YATAY ARAMA
    for(i=0; i<5; i++){
        for(j=0; j<=5-strlen(kelime); j++){
            eslesme=1; // Her yeni baþlangýçta kelime doðruymuþ gibi baþlýyoruz
            for(k=0; k<strlen(kelime); k++){
                if(karakter[i][j+k]!=kelime[k]){
                    eslesme=0; // Bir harf bile tutmazsa bu kelime deðildir
                    break;
                }
            }
            if(eslesme==1){
                bulundu=1; // Kelimenin tamamý eþleþtiyse bulundu bayraðýný kaldýr
                break;
            }
        }
        if(bulundu==1){
            break;
        }
    }
    // 2. DIKEY ARAMA (Eðer yatayda henüz bulunmadýysa)
    if(bulundu==0){
        for(j=0; j<5; j++){
            for(i=0; i<=5-strlen(kelime); i++){
                eslesme=1;
                for(k=0; k<strlen(kelime); k++){
                    if(karakter[i+k][j]!=kelime[k]){
                        eslesme=0;
                        break;
                    }
                }
                if(eslesme==1){
                    bulundu=1;
                    break;
                }
            }
            if(bulundu==1){
                break;
            }
        }
    }
    // SONUÇ EKRANI
    if(bulundu==1){
        printf("\nKelime matris icinde bulundu!\n");
    }
	else{
        printf("\nKelime matris icinde bulunamadi.\n");
    }
	return 0;
}
