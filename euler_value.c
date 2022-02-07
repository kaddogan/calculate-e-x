#include<stdio.h>
#include<math.h>

double fact(int x){

    int i;
    double sonuc=1;

    for(i=1;i<=x;i++){

        sonuc*=i;
    }
    
 return sonuc;
}

int main(){

    int i,x;
    double son=0.0;

    printf("\ne^x fonksiyonunda x'i giriniz:");
    scanf("%d",&x);

    for(i=0;i<=100;i++){

        son+=pow(x,i)/fact(i);

    }

    printf("\ne^%d = %lf \n\n",x,son);

    return 0;
}
