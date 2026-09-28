#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("       --NUMBER GUESSING GAME--       \n");
    printf("I have Generated a random number between 1 and 100 \nCan you guess it?\n");
    int i=0,a=0,n=rand() % (100 - 1 + 1) + 1;
    while (i!=n)
    {
        printf("Enter your guess \n");
        scanf("%d",&i);
        a++;
        if (i>n)
        {
            printf("It is lower\n");
        }
        else if (i<n){
            printf("It is higher\n");
        }    
    }
    printf("Yay! Your guessed it in %d steps.",a);
    return 0;
}