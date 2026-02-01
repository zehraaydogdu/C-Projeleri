#include <stdio.h>
int main() {
    int sayi, i, asalMi = 1;
    printf("Sayi giriniz: ");
    scanf("%d", &sayi);
    if (sayi <= 1) {
        printf("Sayi asal degildir.\n");
    }
	else{
        for (i = 2; i < sayi; i++) {
            if (sayi % i == 0) {
                asalMi = 0;
                break; 
            }
        }
        if (asalMi == 1) {
            printf("%d asal bir sayidir.\n", sayi);
        } 
		else{
            printf("%d asal degildir.\n", sayi);
        }
    }
    return 0;
}
