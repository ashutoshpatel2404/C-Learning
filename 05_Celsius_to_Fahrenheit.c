#include <stdio.h>

int main()
{
    float c,f;
    printf("Enter the Degree of Celsius : ");
    scanf("%f",&c);
    f = (c*9/5)+32;
    printf("The Fahrenheit value of given celsius is : %.2f",f);
    return 0;
}