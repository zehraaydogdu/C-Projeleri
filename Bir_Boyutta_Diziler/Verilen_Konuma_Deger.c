#include <stdio.h>
int main(){
    int dizi[50], i, k, x, n;
    printf("Dizi boyutunu giriniz: ");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        printf("Dizinin %d. elemanini girin: ", i+1);
        scanf("%d", &dizi[i]);
    }
    printf("\nHangi konuma (indise) ekleme yapilsin?: ");
    scanf("%d", &k);
    printf("Eklenecek yeni deger (x) ne olsun?: ");
    scanf("%d", &x);
    for(i=n-1; i>=k; i--){
        dizi[i+1]=dizi[i];
    }
    dizi[k]=x;
    n++;
    printf("\nYeni dizi: ");
    for(i=0; i<n; i++){
        printf("%d ", dizi[i]);
    }
    printf("\n");
    return 0;
}
