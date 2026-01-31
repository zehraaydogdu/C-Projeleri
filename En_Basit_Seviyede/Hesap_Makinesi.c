#include <stdio.h>
int main(){
	int x, y;
	char op;
	printf("Lutfen iki sayi girin: ");
	scanf("%d%d", &x, &y);
	printf("Lutfen 4 operatorden birini secin: + - * /\n");
	scanf(" %c", &op);
	switch(op){
		case '+':
		    printf("%d", x+y);
		    break;
		case '-':
		    printf("%d", x-y);
		    break;
		case '*':
			printf("%d", x*y);
			break;
		case '/':
		    if (y == 0) {
                printf("Hata: Sifira bolme olmaz.\n");
            } else {
                printf("%.2f\n", (float)x/y);
            }
            break;
        default:
            printf("Gecersiz operator.\n");
	}
	return 0;
}
