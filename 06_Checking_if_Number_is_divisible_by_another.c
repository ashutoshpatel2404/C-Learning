#include <stdio.h>

int main(){
    int a,b,c;
    printf("The Dividend is : ");
    scanf("%d",&a);
    printf("The Divisor is : ");
    scanf("%d",&b);
    c = a%b;
    if (c==0){
        printf("The given Dividend is divisible by the given Divisor \n");
    }
    else{
        printf("The given Dividend is not divisible by the given Divisor \n");
        printf("The remainder is %d",c);
    }
    return 0;
}