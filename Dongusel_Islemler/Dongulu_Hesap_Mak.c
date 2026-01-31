#include <stdio.h>
int main(){
    int a, b, op, sonuc;
    while(1){
        printf("1=Toplama  2=Cikarma  3=Carpma  4=Bolme  0=Cikis\n");
        printf("Operator seciniz: ");
        scanf("%d", &op);
        if(op==0) {
            printf("Programdan cikis yaptiniz\n");
            break;
        }
        printf("Iki sayi giriniz: ");
        scanf("%d %d", &a, &b);
        if(op==1){
            sonuc=a+b;
            printf("Sonuc: %d\n", sonuc);
        }
        else if(op==2){
            sonuc=a-b;
            printf("Sonuc: %d\n", sonuc);
        }
        else if(op==3){
            sonuc=a*b;
            printf("Sonuc: %d\n", sonuc);
        }
        else if(op==4) {
            if(b==0) {
                printf("Hata: Sifira bolme yapilamaz!\n");
            }
			else{
                sonuc=a/b;
                printf("Sonuc: %d\n", sonuc);
            }
        }
        else{
            printf("Hatali operator girdiniz!\n");
        }
    }
    return 0;
}
