//Write a program to print the address of a variable. Use this address to get the value of
//the variable.

#include <stdio.h>

int main(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    int* b=&a;
    printf("The address of the number is : %p\n",b);
    printf("The number is : %d",*b);
    return 0;
}
