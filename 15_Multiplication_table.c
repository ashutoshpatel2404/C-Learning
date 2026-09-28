#include <stdio.h>

int main(){
    int n;
    printf("Enter the Number you want to multiply : ");
    scanf("%d",&n);
    for (int i = 1; i < 11; i++)
    {
        printf("%d X %d is %d\n",n,i,n*i);
    }
    
    return 0;
}