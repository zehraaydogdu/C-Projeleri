#include <stdio.h>
int main() {
    int n, i;
    long long faktoriyel = 1; 
    printf("Kaca kadar olan faktoriyelleri gormek istersiniz: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        // Her adýmda eski sonucu yeni sayýyla çarpýyoruz
        // Örn: 2! (2) iken i=3 olunca 2 * 3 = 6 (3!) oluyor.
        faktoriyel=faktoriyel*i;
        printf("%d! = %lld\n", i, faktoriyel);
    }
    return 0;
}
