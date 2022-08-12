#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a<b+c&&b<a+c&&c<a+b){
        if(a!=b&&b!=c) printf("Segitiga sembarang");
        else if(a==b&&b==c) printf("Segitiga sama sisi");
        else printf("Segitiga sama kaki");
    }
    else printf("Bukan segitiga");
return 0;
}