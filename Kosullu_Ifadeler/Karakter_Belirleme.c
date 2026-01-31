#include <stdio.h>
int main(){
    char ch;
    printf("Bir karakter giriniz: ");
    scanf(" %c", &ch);
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')){
        printf("Girilen karakter bir harftir.");
    }
    else if(ch >= '0' && ch <= '9'){
        printf("Girilen karakter bir rakamdir.");
    }
    else{
        printf("Girilen karakter ozel bir karakterdir.");
    }
    return 0;
}
