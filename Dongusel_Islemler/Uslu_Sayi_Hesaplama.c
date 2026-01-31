#include <stdio.h>
#include <math.h>
/*int main(){
	int a, b, i, sonuc=1;
    printf("Lutfen once sayiyi sonra alinacak us degerini giriniz: ");
    scanf("%d%d", &a, &b);
    for(i=1; i<=b; i++){
        sonuc=sonuc*a;
    }
    printf("Son durumda degerimiz: %d", sonuc);
    return 0;
}*/
int main(){
	int a, b, sonuc;
    printf("Lutfen once sayiyi sonra alinacak us degerini giriniz: ");
    scanf("%d%d", &a, &b);
    sonuc=pow(a, b);
    printf("%d", sonuc);
}
