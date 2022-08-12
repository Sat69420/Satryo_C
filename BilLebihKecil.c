#include<stdio.h>
int main(){
    int a,b;
    printf("Masukkan 2 Bilangan: ");
    scanf("%d %d",&a, &b);
    printf("Bilangan Terbesarnya adalah ");
    printf("%d",a>b?a:b);
    return 0;
}