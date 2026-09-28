#include <stdio.h>

float ctf(float a);

int main()
{
    float c,f;
    printf("Enter the Degree of Celsius : ");
    scanf("%f",&c);
    f=ctf (c);
    printf("The Fahrenheit value of given celsius is : %.2f",f);
    return 0;
}

float ctf(float a){
    float f;
    f = (a*9.0/5.0)+32.0;
    return f;
}