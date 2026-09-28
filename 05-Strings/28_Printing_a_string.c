#include <stdio.h>

int main(){
    char str[15];
    printf("Enter the string : ");
    scanf("%14s",str);
    for (int i = 0; i < 14; i++)
    {
        printf("The charcter at index %d is %c \n",i,str[i]);
    }
    
    return 0;
}