#include <stdio.h>

int main(){
    char str[40];
    printf("Enter your name : ");
    scanf("%s",str);
    if (str=="Ashu" || str=="ashu")
    {
        printf("Ashu");
    }
    else{
        printf("gp way");
    }
    return 0;
}