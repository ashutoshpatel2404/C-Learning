#include <stdio.h>
/*A year is a leap year if it is
divisible by 4, except for century years
which must be divisible by 400 to qualify*/
int main(){
    int a;
    printf("Enter the Year : ");
    scanf("%d",&a);
    if (a % 400 == 0 || (a % 4 == 0 && a % 100 != 0)){
        printf("The year is Leap year");
    }
    else{
        printf("The year is not a Leap year");
    }
    return 0;
}