#include <stdio.h>

int main(){
    int n,i=1;
    printf("Enter the number : ");
    scanf("%d",&n);
    while (n>=i)
    {
        printf("%d\n",i);
        i++;
    }
    return 0;
}