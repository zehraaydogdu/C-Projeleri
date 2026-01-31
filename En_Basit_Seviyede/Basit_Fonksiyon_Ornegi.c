#include <stdio.h>
/* NORMAL VERSÝYON
    int main(){
	int x, y;
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d", &x);
	y=3*x*x;
	printf("Sonuc: %d", y);
	return 0;
}*/

/* FONKSÝYON YARDIMIYLA 
    int fonk(int x){
	return 3*x*x;
}
int main(){
    int x, y;
    printf("Lutfen bir sayi giriniz: ");
    scanf("%d", &x);
    y = fonk(x);
    printf("Sonuc: %d\n", y);
    return 0;
}*/

    RECURSIVE BICIMDE
    int carp(int a, int b) {
    if (b == 0)
        return 0;
    else
        return a + carp(a, b - 1);
}
int fonk(int x) {
    int kare = carp(x, x);
    return carp(3, kare);
}
int main() {
    int x, y;
    printf("Lutfen bir sayi giriniz: ");
    scanf("%d", &x);
    y = fonk(x);
    printf("Sonuc: %d\n", y);
    return 0;
}

