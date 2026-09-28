#include <stdio.h>

int main()
{
    float si,p,t,r;
    printf("The Principal amount is : ");
    scanf("%f",&p);
    printf("The Time is : ");
    scanf("%f",&t);
    printf("The Rate of interest is : ");
    scanf("%f",&r);
    si=p*r*t/100;
    printf("The simple interst is : %.2f",si);
    return 0;
}