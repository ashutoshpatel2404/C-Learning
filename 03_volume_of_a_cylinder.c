#include <stdio.h>

int main()
{
    float radius,height,volume;
    printf("The Radius of cylinder is : ");
    scanf("%f",&radius);
    printf("The Height of cylinder is : ");
    scanf("%f",&height);
    volume = 3.14*radius*radius*height;
    printf("The Volume of the cylinder is %f",volume);
    return 0;
}