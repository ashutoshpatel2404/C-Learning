#include <stdio.h>

int main(){
    int n;
    printf("Enter the Number you want to multiply in Reverse : ");
    scanf("%d",&n);
    for (int i = 10; i > 0; i--)
    {
        printf("%d X %d is %d\n",n,i,n*i);
    }
    return 0;
}