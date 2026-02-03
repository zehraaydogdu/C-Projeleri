#include <stdio.h>
int main(){
    int matris[2][2], sonuc[2][2], i, j, skaler;
    printf("2x2 Matrisin elemanlarini giriniz:\n");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("Matris[%d][%d]: ", i, j);
            scanf("%d", &matris[i][j]);
        }
    }
    printf("\nMatrisi hangi sayi ile carpmak istersiniz? ");
    scanf("%d", &skaler);
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            sonuc[i][j]=matris[i][j]*skaler;
        }
    }
    printf("\nSonuc Matrisi:\n");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("%d\t", sonuc[i][j]);
        }
        printf("\n");
    }
    return 0;
}
