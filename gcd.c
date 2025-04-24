
#include<stdio.h>

void main(){
    int a ,b , r=0,q;
    printf("\n Enter  number a : ");
    scanf("%d",&a);
     printf("\n Enter  number  b : ");
    scanf("%d",&b);

    for(q = 1; q>r ;q++){
        a = b * q ;
        r = a / (b * q);
        if(r==a / (b * q)){
                r = r + a -1 ;


        }
        printf(" g. c .d : %d ",r);
    }




}
