#include <stdio.h>
#include <string.h>
int main(){
    char cumle[100];
    int i, buyuk = 0, kucuk = 0, rakam = 0, sembol = 0;
    printf("Bir cumle giriniz: ");
    fgets(cumle, sizeof(cumle), stdin);
    for(i=0; i<strlen(cumle); i++){
        if(cumle[i]>='A' && cumle[i]<='Z'){
            buyuk++;
        }
        else if(cumle[i]>='a' && cumle[i]<='z'){
            kucuk++;
        }
        else if(cumle[i]>='0' && cumle[i]<='9'){
            rakam++;
        }
        else if(cumle[i]!='\n' && cumle[i]!='\r') {
            sembol++;
        }
    }
    printf("Buyuk Harf Sayisi: %d\n", buyuk);
    printf("Kucuk Harf Sayisi: %d\n", kucuk);
    printf("Rakam Sayisi: %d\n", rakam);
    printf("Sembol/Diger: %d\n", sembol);
    return 0;
}
