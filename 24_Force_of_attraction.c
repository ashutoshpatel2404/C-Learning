#include <stdio.h>
float att(int m){
    float f=m*9.8;
    return f;
}

int main(){
    int m;
    float f;
    printf("enter the mass of object : ");
    scanf("%d",&m);
    f= att(m);
    printf("Force of attraction is %.2f",f);
    return 0;
}