#include<stdio.h>
int main(){
    int x,y,sum;
    sum=1;
    printf("Mesin Pencetak Nilai N! (*Hasil Maks 10 Digit)\nMasukkan Nilai Bilangan Bulat Netral atau Positif: ");
    scanf("%d",&x);
    if(x<0){
        printf("Tidak Terdefinisi.\nSilahkan Masukkan Bilangan Bulat Netral atau Positif.");
        return 0;
    }
    y=x;
    for(int i=1;i<=y;i++){
        sum*=x;
        x--;
    }
    printf("%d",sum);
return 0;
}