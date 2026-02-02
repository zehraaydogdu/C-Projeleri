#include <stdio.h>
int main(){
    int dizi[50], i, toplam=0;
    for(i=0; i<5; i++){
        printf("Dizinin %d. elemanini girin: ", i+1);
        scanf("%d", &dizi[i]);
    }
    printf("Dizi elemanlarinin toplami: ");
    for(i=0; i<5; i++){
        toplam+=dizi[i];
    }
    printf("%d", toplam);
    return 0;
}
