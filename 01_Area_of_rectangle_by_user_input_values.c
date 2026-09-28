#include <stdio.h>

int main()
{
    float length , breadth , area;
    printf("Enter Length : ");
    scanf("%f",&length);
    printf("Enter Breadth : ");
    scanf("%f",&breadth);
    area = length*breadth;
    printf("The area is %f",area);
    return 0;
}