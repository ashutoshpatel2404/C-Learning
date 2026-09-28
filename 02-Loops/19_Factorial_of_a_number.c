#include <stdio.h>

int main(){
    int n,fact=1;
    printf("Enter the number : ");
    scanf("%d",&n);
    for (int i = n; i > 0; i--)
    {
        fact=fact*i;
    }
    printf("The factorial is : %d",fact);
    return 0;
}