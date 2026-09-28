#include <stdio.h>

int main(){
    int n;
    printf("Enter how big you want the array : ");
    scanf("%d",&n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d number of the array : ",i);
        scanf("%d",&array[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value at index %d is %d \n",i,array[i]);
    }
    
    return 0;
}
