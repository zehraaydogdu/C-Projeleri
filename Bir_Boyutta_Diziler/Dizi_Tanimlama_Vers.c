#include <stdio.h>
int main(){
    int dizi[50], n=100, i, j=0;
    for(i=1; i<=n; i++){
        if(i%2==0){
            dizi[j]=i; 
            j++;
        }
    }
    printf("1-100 arasi cift sayilar:\n");
    for(i=0; i<j; i++) {
        printf("%d ", dizi[i]);
    }
    return 0;
}
