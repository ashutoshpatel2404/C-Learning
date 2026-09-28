#include <stdio.h>

int main(){
    int n,i=1,sum=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    while (i<=10)
    {
        sum=sum +(n*i);
        i++;
    }
    printf("The sum of the numbers occurring in the multiplication of given number : %d",sum);
    return 0;
}