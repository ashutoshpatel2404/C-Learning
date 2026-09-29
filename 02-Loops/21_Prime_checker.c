#include <stdio.h>

int main(){
    int a, b, prime = 1;
    printf("Enter the number to check if its prime : ");
    scanf("%d", &a);
    for (int i = 2; i < a; i++){
        b = a % i;
        if (b == 0){
            prime = 0;
            break;
        }
    }
    if(a<=1){
        printf("The number is neither prime nor composite");
    }
    else if (prime == 1){
        printf("The number is prime.");
    }
    else {
        printf("The number isnt prime.");
    }
    return 0;
}