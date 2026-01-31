#include <stdio.h>
int main(){
	int a, b, c, d;
	float ort;
	printf("Lutfen 4 sayi giriniz: ");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	ort=(float)(a+b+c+d)/4;
	printf("Ortalamadan buyuk olanlar: ");
    if(a > ort) printf("%d ", a);
    if(b > ort) printf("%d ", b);
    if(c > ort) printf("%d ", c);
    if(d > ort) printf("%d ", d);

    printf("\nOrtalamadan kucuk olanlar: ");
    if(a < ort) printf("%d ", a);
    if(b < ort) printf("%d ", b);
    if(c < ort) printf("%d ", c);
    if(d < ort) printf("%d ", d);

    printf("\nOrtalamaya esit olanlar: ");
    if(a == ort) printf("%d ", a);
    if(b == ort) printf("%d ", b);
    if(c == ort) printf("%d ", c);
    if(d == ort) printf("%d ", d);
    return 0;
}
