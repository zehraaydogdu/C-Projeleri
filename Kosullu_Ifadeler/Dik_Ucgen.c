#include <stdio.h>
int main(){
	int a, b, c, h;
	printf("Ucgenin kenarlarini giriniz: ");
	scanf("%d%d%d", &a, &b, &c);
    if(a+b<=c || a+c<=b || b+c<=a){
        printf("Bu kenarlarla ucgen olusmaz.");
        return 0;
    }

    if(a>=b && a>=c){
        h=a; x=b; y=c;
    } else if(b>=a && b>=c){
        h=b; x=a; y=c;
    } else{
        h=c; x=a; y=b;
    }

    if(x*x+y*y==h*h){
        printf("Dik ucgen cizilebilir");
    } else{
        printf("Dik ucgen cizilemez");
    }
    return 0;
}
