#include<stdio.h>

void main(){
    int i , n , prod = 1;
    printf("\n Enter number to print factorial : ");
    scanf("%d",&n);
if(n > 0){
        for(i = 1; i <= n; i++){

            prod = prod * i;
        }
    }
    else if(n == 0)
       {
            printf("\n Factorial = %d ",1);
       }
       else
        printf("\n %d ");

}
