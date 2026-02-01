#include <stdio.h>
int main(){
    int n, i, j, asalMi;
    printf("Kaca kadar olan asal sayilari gormek istersiniz: ");
    scanf("%d", &n);
    printf("1 ile %d arasindaki asal sayilar:\n", n);
    for(i=2; i<=n; i++) {
        asalMi=1; 
        for(j=2; j<=i/2; j++) {
            if (i % j == 0) {
                asalMi = 0; !
                break;    
            }
        }
        if (asalMi == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
