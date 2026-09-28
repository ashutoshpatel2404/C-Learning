#include <stdio.h>

int main(){
    char a;
    printf("Enter a Uppercase or Lowercase letter : ");
    scanf("%c",&a);
    if (a>=65 && a<=90){
        printf("It is Uppercase");
    }
    else if (a>=97 && a<=122){
        printf("It is Lowercase");
    }
    else{
        printf("Please enter a letter");
    }
    return 0;
}