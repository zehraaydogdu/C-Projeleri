#include <stdio.h>
int main(){
    int n, i;
    long long fib[50]; 
    printf("Kac Fibonacci elemani gormek istiyorsunuz: ");
    scanf("%d", &n);
    if(n<=0)
	return 0;
    // Ýlk iki elemaný biz tanýmlýyoruz
    fib[0]=1;
    if(n>1)
	fib[1]=1;
    // 2. indisten baþlayarak n'e kadar her sayýyý hesaplýyoruz
    for(i=2; i<n; i++){
        fib[i]=fib[i-1]+fib[i-2]; // Önceki iki kutunun toplamý
    }
    printf("Fibonacci serisi: ");
    for(i=0; i<n; i++) {
        printf("%lld ", fib[i]);
    }
    printf("\n");
    return 0;
}
